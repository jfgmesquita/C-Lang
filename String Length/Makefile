all: sl

sl.o: sl.c
	gcc -c -g sl.c -o sl.o

sl: sl.o
	gcc sl.o -o sl

clean:
	rm -f sl.o sl