#include<stdio.h>

int main() {
    // Arithematic Operator
    int a, b;
    a = 7;
    b = 5;
    printf("Arithematic Operator:\n");
    printf("a+b = %d\n", a+b);
    printf("a-b = %d\n", a-b);
    printf("a*b = %d\n", a*b);
    printf("a/b = %d\n", a/b);
    printf("a%%b = %d\n\n", a%b);

    // Relational Operator
    printf("Relational Operator:\n");
    printf("%d\n", a<b);
    printf("%d\n", a>b);
    printf("%d\n", a>=b);
    printf("%d\n\n", a<=b);

    // Logical Operator --> Used in decision making
    printf("Logical Operator:\n");
    if (a<b)
    {
        printf("%d is less than %d", a, b);
    } else if (a==b)
    {
        printf("a and b both are %d", a);
    } else
    {
        printf("%d is less than %d", b, a);
    }

    return 0;
}