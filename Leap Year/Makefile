all: ly

ly.o: ly.c
	gcc -c -g ly.c -o ly.o

ly: ly.o
	gcc ly.o -o ly

clean:
	rm -f ly.o ly

