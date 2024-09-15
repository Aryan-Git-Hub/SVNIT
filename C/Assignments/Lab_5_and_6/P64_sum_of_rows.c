#include<stdio.h>

int main() {
    int n;
    printf("Enter the value of n for square matrix: ");
    scanf("%d", &n);

    int m[n][n];
    printf("Enter the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
        printf("\n");
    }

    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += m[j][i];
        }
        printf("%d ", sum);
    }
    
    return 0;
}