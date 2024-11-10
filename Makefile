# Makefile - COMPILATION AND LINKING RULES FOR C PROGRAMS

# Default rule: "make" without any argument will execute this rule
all: program

# Compiling the source file (program.c) to generate the object file (program.o)
# -c: To compile and assemble the source file, but not to link
# -g: To generate debugging information
# -o: To specify the output file name
program.o: program.c
	cc -c -g program.c -o program.o

# Linking the object file (program.o) to generate the executable file (program)
program: program.o
	cc program.o -o program

# Cleaning generated files
clean:
	rm -f program.o program
