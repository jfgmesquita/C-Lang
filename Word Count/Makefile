all: wc

wc.o: wc.c
	gcc -c -g wc.c -o wc.o

wc: wc.o
	gcc wc.o -o wc

clean:
	rm -f wc.o wc