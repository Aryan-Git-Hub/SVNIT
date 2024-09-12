#include<stdio.h>

int main() {
    int n;
    printf("Enter any single digit number: ");
    scanf("%d", &n);

    int a;
    for (int i = 1; i <= n; i++)
    {
        a = 1;
        for (int j = 1; j <= n; j++)
        {
            if (a==1)
            {
                for (int k = 1; k <= n-i; k++)
                {
                    printf(" ");
                }
                a = 0;
            }
            if (j<=i)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    
    return 0;
}