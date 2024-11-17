# Bit Count Program

This program counts the number of set bits (1s) in a given hexadecimal number.

## Files

- `bc.c`: The source code for the Bit Count program.
- `Makefile`: The Makefile to compile and clean the program.

## Compilation

To compile the program, open a terminal and navigate to the directory containing `bc.c` and the `Makefile`. Run the following command:

```sh
make
```

This will compile the source code and generate an executable named `bc`.

## Usage

After compiling the program, you can run it by providing a hexadecimal number as an argument. For example:

```sh
./bc 1A3F
```

This will output the number of set bits in the hexadecimal number 1A3F.

## Example

Compile the Program:

```sh
make
```

Run the Program:

```sh
./bc 1A3F
```

Output:

```sh
The number 6719 has 8 set bits.
```

Clean Up:

```sh
make clean
```

###### This will remove the compiled files and clean the directory.