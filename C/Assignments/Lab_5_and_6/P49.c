#include<stdio.h>

int main() {
    int n, rem;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    rem = n%2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<=n-i)
            {
                printf(" ");
            } else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}