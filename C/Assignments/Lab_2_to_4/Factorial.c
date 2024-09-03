#include<stdio.h>

int main() {
    int a;
    printf("Enter any no. to find factorial: ");
    scanf("%d", &a);

    int fact;
    for (int i=1; i<=a; i++)
    {
        fact = fact*i;
    }
    printf("%d\n", fact);

    return 0;
}