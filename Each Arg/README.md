# Each Argument Program

This program prints each command-line argument passed to it.

## Files

- `ea.c`: The source code for the Each Argument program.
- `Makefile`: The Makefile to compile and clean the program.

## Compilation

To compile the program, open a terminal and navigate to the directory containing `ea.c` and the `Makefile`. Run the following command:

```sh
make
```

This will compile the source code and generate an executable named `ea`.

## Usage

After compiling the program, you can run it by providing command-line arguments. For example:

```sh
./ea arg1 arg2 arg3
```

This will output each argument on a new line.

## Example

Compile the Program:

```sh
make
```

Run the Program:

```sh
./ea arg1 arg2 arg3
```

Output:

```sh
argv[0] = ./ea
argv[1] = arg1
argv[2] = arg2
argv[3] = arg3
```

Clean Up:

```sh
make clean
```
###### This will remove the compiled files and clean the directory.
