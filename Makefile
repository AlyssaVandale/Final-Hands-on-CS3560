CCFLAGS = g++
CXFLAGS = -o

all:
	@echo "Command Options with Make"
	@echo "1.) build: builds the source code "
	@echo "2.) doc: generates documentation for te code "
	@echo "3.) check: use cppcheck and valgrind to check source code"
	@echo "4.) clean: cleans the .o and .gch files"

build:
	g++ -o count.exe count_functions.cc

doc:
	doxygen count_functions.cc

check:
	cppcheck count_functions.cc
	make build
	valgrind ./count.exe

clean:
	rm -f *.o
	rm -f *.o
