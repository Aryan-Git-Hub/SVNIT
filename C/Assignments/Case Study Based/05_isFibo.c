#include<stdio.h>

int fibo(int n) {
    if (n<=1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main() {
    int T;
    printf("Enter no. of testcases: ");
    scanf("%d", &T);
    
    int n;
    int j;
    for (int i = 1; i <= T; i++)
    {
        j = 0;
        printf("Enter the number %d: ", i);
        scanf("%d", &n);


        for (; j <= n+2; j++)
        {
            if(n==fibo(j)) {
                printf("IsFibo\n");
                j = n+2;
                break;
            }
        }
        if (j!=n+2)
        {
            printf("IsNotFibo\n");
        }
    }
    

    return 0;
}