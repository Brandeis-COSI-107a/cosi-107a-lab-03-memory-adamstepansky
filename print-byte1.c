#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Not enough values");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        unsigned long num;

        if (strncmp(argv[i], "0x", 2) == 0) {
            num = strtol(argv[i], NULL, 16);
        } else {
            num = strtol(argv[i], NULL, 10);
        }

        unsigned char byte1 = (num >> 8) & 0xFF;

        printf("0x%02X %3d\n", byte1, byte1);
    }

    return 0;
}
