#include <stdio.h>
#include <stdlib.h>
#define IS_LEAP(year) ((((year % 4) == 0) && ((year % 100) != 0)) || ((year % 400) == 0))

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("Usage: %s <year> [<year> ...]\n", argv[0]);
        return 1;
    }

    unsigned long int i, num;
    char *endptr;

    for(i = 1; i < argc; i++) {
        if(*argv[i] == '-') {
            printf("%s -> ERROR: The number can only be a positive integer.\n", argv[i]);
            continue;
        }

        num = strtoul(argv[i], &endptr, 10);

        if(*endptr != '\0' || num == 0) {
            printf("%s -> ERROR: The number can only be a positive integer.\n", argv[i]);
        } else {
            if(IS_LEAP(num)) {
                printf("%lu -> Yes\n", num);
            } else {
                printf("%lu -> No\n", num);
            }
        }
    }
    
    return 0;
}