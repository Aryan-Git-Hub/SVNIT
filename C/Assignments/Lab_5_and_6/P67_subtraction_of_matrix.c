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

    printf("Subtraction of Matrix 2 and Matrix 1 is:\n");
    int sub[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub[i][j] = m1[i][j]-m2[i][j];
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}