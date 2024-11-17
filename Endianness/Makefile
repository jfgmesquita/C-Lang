all: e

e.o: e.c
	gcc -c -g e.c -o e.o

e: e.o
	gcc e.o -o e

run: e
	./e

clean:
	rm -f e.o e