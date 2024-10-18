#include <stdio.h>
#include <stdlib.h>

int countBits(unsigned long num) {
    int count = 0;

    while(num) {
        // Increment the counter if the least significant bit is 1
        if(num & 1) {
            count++;
        }
        // Shift the number to the right to check the next bit
        num >>= 1;
    }

    return count;
}

int main(int argc, char *argv[]) {
    unsigned long num = 0;

    if(argc < 2) {
        printf("Usage: %s <integer number>\n", argv[0]);
        return 1;
    }

    char *endptr;
    num = strtol(argv[1], &endptr, 16);

    // Check if the conversion was successful
    if(endptr && *endptr != '\0') {
        printf("Error: '%s' is not a valid hexadecimal number.\n", argv[1]);
        return 1; // Return an error code
    }

    int setBits = countBits(num);
    printf("The number %ld has %d set bits.\n", num, setBits);

    return 0;
}