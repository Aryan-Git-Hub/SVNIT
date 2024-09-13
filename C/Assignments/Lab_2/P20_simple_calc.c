#include<stdio.h>

int main() {
    int operator, a, b;
    printf("Enter 1 to add, 2 for subtraction, 3 for multiplication, 4 for division: ");
    scanf("%d", &operator);

    switch (operator)
    {
    case 1:
        printf("Enter two numbers to add: ");
        scanf("%d%d", &a, &b);
        int sum = a+b;
        printf("Sum of two numbers is: %d", sum);
        break;

    case 2:
        printf("Enter two numbers to subtract: ");
        scanf("%d%d", &a, &b);
        int sub = a-b;
        printf("Subtraction of two numbers a-b: %d", sub);
        break;

    case 3:
        printf("Enter two numbers to multiply: ");
        scanf("%d%d", &a, &b);
        int mul = a*b;
        printf("Multiplication of two numbers: %d", mul);
        break;

    case 4:
        printf("Enter two numbers to divide: ");
        scanf("%d%d", &a, &b);
        float dev = a/b;
        printf("Division of two numbers a/b: %f", dev);
        break;
    
    default:
        printf("Enter two numbers to add: ");
        scanf("%d%d", &a, &b);
        sum = a+b;
        printf("Sum of two numbers is: %d", sum);
        break;
    }

    return 0;
}