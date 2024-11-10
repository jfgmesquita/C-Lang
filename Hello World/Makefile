all: hw

hw.o: hw.c
	cc -c -g hw.c -o hw.o

hw: hw.o
	cc hw.o -o hw

clean:
	rm -f hw.o hw