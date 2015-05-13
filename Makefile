.PHONY: all clean core

all:
	@echo "Run 'make core' to rebuild Gauche-iOS-core.framework"

clean:
	rm -f core *~

core: Gauche-iOS-core.framework

Gauche-iOS-core.framework : Gauche/build-ios/Gauche-iOS-core.framework/libgauche-0.9.a
	rm -rf Gauche-iOS-core.framework
	mkdir Gauche-iOS-core.framework
	cp -r Gauche/build-ios/Gauche-iOS-core.framework/ Gauche-iOS-core.framework

Gauche/build-ios/Gauche-iOS-core.framework/libgauche-0.9.a : Gauche/configure
	cd Gauche; gosh src/cross-compile-ios.scm

Gauche/configure : Gauche/configure.ac
	cd Gauche; ./DIST gen

Gauche/configure.ac:
	git clone https://github.com/shirok/Gauche.git

