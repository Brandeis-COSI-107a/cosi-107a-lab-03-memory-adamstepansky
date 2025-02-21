#include <stdio.h>

int var;

void function() {
      return;
}

int main() {
    int stack_var = 0;
    const char *string = "initialized data";

    printf("stack variable: 0x%012lX\n", (unsigned long)&stack_var);
    printf("initialized data: 0x%012lX\n", (unsigned long)&string);
    printf("uninitialized data: 0x%012lX\n", (unsigned long)&var);
    printf("main: 0x%012lX\n", (unsigned long)&main);
    printf("function: 0x%012lX\n", (unsigned long)&function);

    return 0;
}
