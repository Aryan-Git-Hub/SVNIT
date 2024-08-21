#include<stdio.h> // --> Header File

int main() // --> main() function
{
    printf("Welcome to AI Department\n");
    printf("Hello world\n\n");

    // Sum of two numbers
    int a, b, sum1;
    a = 2;
    b = 3;
    sum1 = a+b;
    printf("Sum of a and b is: %d\n\n", sum1);

    // Using scanf() function
    int c, d, sum2;
    printf("Enter value of c: ");
    scanf("%d", &c);
    printf("Enter value of d: ");
    scanf("%d", &d);
    sum2 = c+d;
    printf("Sum of c and d is: %d\n", sum2);

    return 0;
}