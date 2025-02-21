#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Enter decimal numbers");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        int number = strtol(argv[i], NULL, 10);
        int low_8_bits = number & 0xFF;
        printf("%-d 0x%02X %d\n", i, low_8_bits, low_8_bits);
    }

    return 0;
}
