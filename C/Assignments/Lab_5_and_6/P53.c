#include<stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a = 0;
    int b = 0;
    for (int i = 1; i <= 2*n-1; i++)
    {
        a++;
        for (int j = 1; j <= n+a-1; j++)
        {
            if (i<=n)
            {
                if (j<n-a+1)
                {
                    printf(" ");
                } else
                {
                    printf("*");
                }
            } else
            {
                if (j<=i-n || j>=2*n-1-b)
                {
                    printf(" ");
                } else
                {
                    printf("*");
                }
            }
        }
        if (i>n) b++;
        
        printf("\n");
    }
    

    return 0;
}