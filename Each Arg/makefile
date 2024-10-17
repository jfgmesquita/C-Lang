all: ea

ea.o: ea.c
	cc -c -g ea.c -o ea.o

ea: ea.o
	cc ea.o -o ea

clean:
	@rm -f *.o ea