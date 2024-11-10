all: ea

ea.o: ea.c
	gcc -c -g ea.c -o ea.o

ea: ea.o
	gcc ea.o -o ea

clean:
	rm -f ea.o ea