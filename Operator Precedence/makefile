all: op

op.o: op.c
	cc -c -g op.c -o op.o

op: op.o
	cc op.o -o op

clean:
	@rm -f *.o op