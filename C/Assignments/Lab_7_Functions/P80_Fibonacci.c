#include<stdio.h>

void fib(int n)
{
    int a = 0;
    int b = 1;
    int temp;
    for (int i=0; i<n; i++)
    {
        printf("%d\n", b);
        temp = b;
        b += a;
        a = temp;
    }
}

int main() {
    int n;
    printf("Enter the no. where you want to print fibonacci series: ");
    scanf("%d", &n);

    fib(n);

    return 0;
}