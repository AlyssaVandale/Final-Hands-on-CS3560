CCFLAGS = g++
CXFLAGS = -o

all:
	@echo "Command Options with Make"
	@echo "1.) build: builds the source code "
	@echo "2.) doc: generates documentation for te code "
	@echo "3.) clean: cleans the .o and .gch files"

build:
	$(CC) $(CXX) count.exe count_functions.cc

doc:
	

clean:
	rm -f *.o
	rm -f *.o
