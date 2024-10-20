#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char* s = argv[i];
        int len = strlen(s);
        printf("Length(\"%s\"): %d\n", s, len);
    }

    return 0;
}