#include<stdio.h>

int main() {
    int n, even, odd;
    printf("Enter any no.: ");
    scanf("%d", &n);

    even = 0;
    odd = 0;
    for (int i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            even = even+i;
        } else
        {
            odd = odd+i;
        }
    }

    printf("Sum of Even and Odd no. from 1 to %d respectively are %d and %d", n, even, odd);
    

    return 0;
}