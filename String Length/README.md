# String Length Program

This program calculates the length of all strings passed as command-line arguments.

## Files

- `sl.c`: The source code for the String Length program.
- `Makefile`: The Makefile to compile and clean the program.

## Compilation

To compile the program, open a terminal and navigate to the directory containing `sl.c` and the `Makefile`. Run the following command:

```sh
make
```

This will compile the source code and generate an executable named `sl`.

## Usage

After compiling the program, you can run it by providing strings as command-line arguments. For example:

```sh
./sl "example string"
```

This will output the length of the providade strings.

## Example

Compile the Program

```sh
make
```

Run the Program:

```sh
./sl "example string"
```

Output

```sh
Length("example"): 7
Length("string"): 6
```

Clean Up:

```sh
make clean
```

###### This will remove the compiled files and clean the directory.