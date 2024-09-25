#include<stdio.h>

int main() {
    int m, n;
    printf("Enter value of 'm' & 'n' respectively: ");
    scanf("%d%d", &m, &n);
    int mat[m][n];

    printf("Enter the Matrix 1:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    printf("Your Matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}