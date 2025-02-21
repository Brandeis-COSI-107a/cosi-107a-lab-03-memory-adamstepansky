#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Enter decimal numbers");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        unsigned long long address = strtoull(argv[i], NULL, 10);
        address = address & 0xFFFFFFFFFFFF;
        printf("0x%012llX\n", address);
    }

    return 0;
}
