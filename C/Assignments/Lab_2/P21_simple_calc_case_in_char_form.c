#include<stdio.h>

int main() {
    int a, b;
    char operator;
    printf("Enter '+' to add, '-' for subtraction, 'x' for multiplication, '/' for devidition: ");
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        printf("Enter two numbers to add: ");
        scanf("%d%d", &a, &b);
        int sum = a+b;
        printf("Sum of two numbers is: %d", sum);
        break;

    case '-':
        printf("Enter two numbers to subtract: ");
        scanf("%d%d", &a, &b);
        int sub = a-b;
        printf("Subtraction of two numbers a-b: %d", sub);
        break;

    case 'x':
        printf("Enter two numbers to multiply: ");
        scanf("%d%d", &a, &b);
        int mul = a*b;
        printf("Multiplication of two numbers: %d", mul);
        break;

    case '/':
        printf("Enter two numbers to devide: ");
        scanf("%d%d", &a, &b);
        float dev = a/b;
        printf("Devidition of two numbers a/b: %f", dev);
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