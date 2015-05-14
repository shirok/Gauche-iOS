//
//  ViewController.m
//  Gauche-workbench
//
//  Created by Shiro Kawai on 5/9/15.
//  Copyright (c) 2015 SchemeArts. All rights reserved.
//

#import "ViewController.h"
#import <Gauche-iOS-core/gauche.h>
#import <ifaddrs.h>
#import <arpa/inet.h>
#import <net/if.h>
#import <stdlib.h>

extern ScmObj load_repl_server(void);

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *ipaddr = [self getAddressWithInterfacePrefix:@"en"];
    int key = arc4random_uniform(1000000);
    int port = [self startServerWithKey:key];
    
    CGRect screenBounds = [UIScreen mainScreen].bounds;
    const CGFloat labelHeight = 100.0f;
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, screenBounds.size.height/2 - labelHeight/2,
                                                               screenBounds.size.width, labelHeight)];
    label.font = [UIFont fontWithName:@"Helvetica" size:16.0f];
    label.textAlignment = NSTextAlignmentCenter;
    label.numberOfLines = 0;
    label.lineBreakMode = NSLineBreakByWordWrapping;
    if (!ipaddr) {
        label.text = @"Couldn't get local IP addr.";
    } else if (port == 0) {
        label.text = @"Couldn't start repl server.";
    } else {
        label.text = [NSString stringWithFormat:@"To get REPL, connect %@:%d, and enter key code %d",
                      ipaddr, port, key];
    }
    [self.view addSubview:label];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSString*)getAddressWithInterfacePrefix:(NSString*)pfx;
{
    struct ifaddrs *ifs;
    NSString *r = nil;
    if (getifaddrs(&ifs) != 0) return nil;
    for (struct ifaddrs *ifs2 = ifs; ifs2; ifs2 = ifs2->ifa_next) {
        if (!(ifs2->ifa_flags & IFF_UP)) continue;
        if (ifs2->ifa_addr->sa_family != AF_INET) continue;
        NSLog(@"%s", ifs2->ifa_name);
        NSString *nsname = [NSString stringWithUTF8String:ifs2->ifa_name];
        if (![nsname hasPrefix:pfx]) continue;
        const struct sockaddr_in *addr = (const struct sockaddr_in*)ifs2->ifa_addr;
        char buf[INET_ADDRSTRLEN];
        if (inet_ntop(AF_INET, &addr->sin_addr, buf, INET_ADDRSTRLEN) == NULL) continue;
        r = [NSString stringWithUTF8String:buf];
        break;
    }
    freeifaddrs(ifs);
    return r;
}

- (int)startServerWithKey:(int)key
{
    ScmObj r = load_repl_server();
    if (!SCM_TRUEP(r)) {
        ScmObj o = Scm_MakeOutputStringPort(TRUE);
        Scm_ReportError2(r, o);
        ScmObj os = Scm_GetOutputString(SCM_PORT(o), 0);
        NSLog(@"Load failed: %s", Scm_GetStringConst(SCM_STRING(os)));
        return 0;
    }
    
    static ScmObj start_server_proc = SCM_UNDEFINED;
    SCM_BIND_PROC(start_server_proc, "start-server", Scm_UserModule());

    ScmEvalPacket p;
    if (Scm_Apply(start_server_proc, SCM_LIST1(SCM_MAKE_INT(key)), &p) < 0) {
        NSLog(@"(start-server) failed");
        return 0;
    } else {
        return Scm_GetInteger(p.results[0]);
    }
}

@end
