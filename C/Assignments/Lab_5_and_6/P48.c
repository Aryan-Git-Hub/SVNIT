#include<stdio.h>

int main() {
    int n;
    printf("Enter any single digit number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j1 = 1; j1 <= n-i; j1++)
        {
            printf(" ");
        }
        for (int j2 = 1; j2 <= i; j2++)
        {
            printf("%d", j2);
        }
        printf("\n");
    }
    
    return 0;
}