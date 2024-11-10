all: hw

hw.o: hw.c
	gcc -c -g hw.c -o hw.o

hw: hw.o
	gcc hw.o -o hw

clean:
	rm -f hw.o hw