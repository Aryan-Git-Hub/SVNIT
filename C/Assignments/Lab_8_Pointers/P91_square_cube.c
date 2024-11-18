#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int* ptr = &n;
    printf("Square of %d is %d\n", n, (*ptr)*(*ptr));
    printf("Cube of %d is %d", n, (*ptr)*(*ptr)*(*ptr));

    return 0;
}