# Leap Year Program

This program cheack if the provided years are leap or not. The source code is in the file `ly.c`.

## Files

- `ly.c`: The source code for the leap year program.
- `Makefile`: The Makefile to compile and clean the program.

## Compilation

To compile the program, open a terminal and navigate to the directory containing `ly.c` and the `Makefile`. Run the following command:

```sh
make
```

This will compile the source code and generate an executable named ly.

## Usage

After compiling the program, you can run it by providing years as arguments. For example:

```sh
./ly 1900 2000
```

This will output if the years 1900 and 2000 are leap years or not.

## Example

Compile the Program:

```sh
make
```

Run the Program:

```sh
./ly 1900 2000 -2022 20.23 2023 2024 0
```

Output:

```sh
1900 -> No
2000 -> Yes
-2022 -> ERROR: The number can only be a positive integer.
20.23 -> ERROR: The number can only be a positive integer.
2023 -> No
2024 -> Yes
0 -> ERROR: The number can only be a positive integer.
```

Clean Up:

```sh
make clean
```

###### This will remove the compiled files and clean the directory.