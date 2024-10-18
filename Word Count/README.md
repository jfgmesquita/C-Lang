# Word Count Program

This program counts the number of lines, words, and characters in the input provided via standard input (stdin). The source code is in the file `wc.c`.

## Files
- `wc.c`: The source code for the word count program.
- `Makefile`: The Makefile to compile and clean the program.

## Compilation

To compile the program, open a terminal and navigate to the directory containing `wc.c` and the `Makefile`. Run the following command:

```sh
make
```

This will compile the source code and generate an executable named wc.

## Usage

After compiling the program, you can run it and provide input via standard input (stdin). For example:

```sh
./wc
```

Then type or paste the text you want to count, and press Ctrl+D (on Linux) to signal the end of input.

## Example

Compile the Program:

```sh
make
```

Run the Program:

```sh
./wc
```

Input:

```sh
Hello world
This is a test.
```

Output:

```sh
Number of lines: 2
Number of words: 5
Number of characters: 25
```

Clean Up:

```sh
make clean
```

###### This will remove the compiled files and clean the directory.