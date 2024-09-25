#include<stdio.h>

int main() {
    int a = 3;
    int n = 1;

    while (1==1)
    {
        if (n==a)
        {
            printf("Congratulations! You Won!");
            break;
        }
        printf("Enter the value of 'n' between 1 to 10: ");
        scanf("%d", &n);
    }

    return 0;
}