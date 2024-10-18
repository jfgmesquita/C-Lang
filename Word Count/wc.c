#include <stdio.h>

int main(int argc, char *argv[]) {
    char ch;
    char lastChar = ' ';
    int characters = 0, words = 0, lines = 0;

    while ((ch = getchar()) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }
        if ((lastChar == ' ' || lastChar == '\n' || lastChar == '\t') && (ch != ' ' && ch != '\n' && ch != '\t')) {
            words++;
        }
        lastChar = ch;
    }

    printf("Number of lines: %d\n", lines);
    printf("Number of words: %d\n", words);
    printf("Number of characters: %d\n", characters);

    return 0;
}
