#include<stdio.h>

int main() {
    int m1[3][3];
    int m2[3][3];

    printf("Enter the Matrix 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the Matrix 2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
        printf("\n");
    }

    int m[3][3];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += m1[j][k]*m2[k][i];
            }
            m[j][i] = sum;
            sum = 0;
        }
    }

    printf("Multiplication of Matrix 1 and Matrix 2 are:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}