all: sl

sl.o: sl.c
	cc -c -g sl.c -o sl.o

sl: sl.o
	cc sl.o -o sl

clean:
	@rm -f *.o sl