#include<stdio.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    float sum = 0;
    float fac;
    for (float i=1; i<=n; i++)
    {   fac = 1;
        for (float j=1; j<=i; j++)
        {
            fac *= j;
        }
        sum += i/fac;
    }

    printf("Sum of series: %f", sum);

    return 0;
}