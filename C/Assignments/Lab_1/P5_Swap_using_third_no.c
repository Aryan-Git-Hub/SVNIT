#include<stdio.h>

int main() {
    int a, b, c;
    a = 10;
    b = 15;
    printf("Value of a and b respectively are: %d and %d\n", a, b);

    c = a;
    a = b;
    b = c;
    printf("Value of a and b after swaping respectively are: %d and %d", a, b);

    return 0;
}