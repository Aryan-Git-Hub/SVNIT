#include <stdio.h>

int main() {
    int a = 10;     // Original variable
    int *ptr = &a;  // Pointer pointing to the address of 'a'
    printf("Original value of a: %d\n", a);

    // Modify the value of 'a' using the pointer
    *ptr = 20;
    printf("Modified value of a: %d\n", a);

    return 0;
}
