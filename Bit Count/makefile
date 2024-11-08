all: bc

bc.o: bc.c
	cc -c -g bc.c -o bc.o

bc: bc.o
	cc bc.o -o bc

clean:
	rm -f bc.o bc