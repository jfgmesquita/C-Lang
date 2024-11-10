all: bc

bc.o: bc.c
	gcc -c -g bc.c -o bc.o

bc: bc.o
	gcc bc.o -o bc

clean:
	rm -f bc.o bc