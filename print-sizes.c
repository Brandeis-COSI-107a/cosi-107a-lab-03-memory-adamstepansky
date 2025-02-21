#include <stdio.h>

int main() {
    int num = 978;
    int *int_ptr;
    char char_array[200];
    char *char_ptr;

    printf("The size of char is %zu\n", sizeof(char));
    printf("The size of short is %zu\n", sizeof(short));
    printf("The size of int is %zu\n", sizeof(int));
    printf("The size of long is %zu\n", sizeof(long));
    printf("The size of long long is %zu\n", sizeof(long long));
    printf("The size of float is %zu\n", sizeof(float));
    printf("The size of double is %zu\n", sizeof(double));
    printf("The size of char * is %zu\n", sizeof(char *));
    printf("The size of int * is %zu\n", sizeof(int *));
    printf("The size of long * is %zu\n", sizeof(long *));
    
    printf("The size of my character array is %zu\n", sizeof(char_array));

    char_ptr = char_array;
    printf("The size of my character pointer is %zu\n", sizeof(char_ptr));

    int_ptr = num;
    printf("The size of my int pointer is %zu\n", sizeof(int_ptr));

    printf("The size of what my integer pointer points at is %zu\n", sizeof(*int_ptr));

    return 0;
}
