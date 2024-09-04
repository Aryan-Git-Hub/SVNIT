#include<stdio.h>

int main() {
    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);

    if (n%2==0)
    {
        printf("Even number");
    } else
    {
        printf("Odd number");
    }

    return 0;
}