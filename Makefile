CC=gcc
CFLAGS=-lstdc++ -std=c++17 -pedantic -Wall -Werror -Wextra
OS := $(shell uname)
TEST_LIBS = -lgtest -lgtest_main -lpthread


all: clean install dvi 

start: install
	cd 3DViewer.app/Contents/MacOS && ./3DViewer

install: clean
	cd QT_OpenGL && qmake 3DViewer.pro && make && rm Makefile && mv 3DViewer.app ../3DViewer.app

uninstall:
	rm -rf 3DViewer.app

dvi:
	@open README.html

tests: clean
	@$(CC) $(CFLAGS) unit_tests.cc ccfile/handle_file.cc -o unit_tests $(TEST_LIBS)
	@./unit_tests

dist: install
	rm -rf Archive_3DViewer/
	mkdir Archive_3DViewer/
	mv 3DViewer.app Archive_3DViewer
	tar -cvzf Archive_3DViewer.tar.gz Archive_3DViewer

clang:
	clang-format -style=Google -n  Search/*.h QT_OpenGL/*.h QT_OpenGL/*.cc lib/*.h ccfile/*.cc unit_tests.cc

clean:
	@rm -rf QT_OpenGL/*.o
	@rm -rf 3DViewer.app
	@rm -rf Archive_3DViewer
	@rm -rf dist-newstyle/
	@rm -rf unit_tests.dSYM
	@rm -rf unit_tests


.PHONY: all install uninstall dvi tests dist clang clean
