all: op

op.o: op.c
	gcc -c -g op.c -o op.o

op: op.o
	gcc op.o -o op

run: op

clean:
	rm -f op.o op