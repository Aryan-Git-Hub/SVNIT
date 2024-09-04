#include<stdio.h>

int main() {
    int a, b;
    a = 10;
    b = 15;
    printf("Value of a and b respectively are: %d and %d\n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("Value of a and b after swaping respectively are: %d and %d", a, b);

    return 0;
}