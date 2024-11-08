all: wc

wc.o: wc.c
	cc -c -g wc.c -o wc.o

wc: wc.o
	cc wc.o -o wc

clean:
	rm -f wc.o wc