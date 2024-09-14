#include<stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    n = n+1;
    int a = 1;
    int b;
    for (int i = 1; i <= n; i++)
    {
        b = i;
        if (i==n)
        {
            break;
        }
        
        for (int j = 1; j <= n+i-1; j++)
        {
            if (j<n-i+1)
            {
                printf(" ");
            } else
            {
                if (j<n)
                {
                    printf("%d", a);
                    a++;
                } else if (j==i)
                {
                    printf("%d", i);
                } else
                {
                    printf("%d", b--);
                }
            }
        }
        a = 1;
        printf("\n");
    }
    

    return 0;
}