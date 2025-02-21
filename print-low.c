#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Not enough values");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        int num;
        
        if (strncmp(argv[i], "0x", 2) == 0) {
            num = strtol(argv[i], NULL, 16);
        } else {
            num = strtol(argv[i], NULL, 10);
        }
        
        int low_8_bits = num & 0xFF;
        printf("%d 0x%02X %3d\n", i, low_8_bits, low_8_bits);
    }

    return 0;
}
