#include <stdio.h>
#include <stdint.h>

void is_big_or_little_endian() {
    union {
        uint8_t i;
        char c;
    } u;

    u.i = 1;

    if (u.c == 1) {
        printf("Little-endian\n");
    } else {
        printf("Big-endian\n");
    }
}

int main(void) {
    is_big_or_little_endian();
    return 0;
}