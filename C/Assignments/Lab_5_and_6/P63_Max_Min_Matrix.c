#include<stdio.h>

int main() {
    int m[3][3];

    printf("Enter the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
        printf("\n");
    }
    

    int greatest = m[0][0];
    int smallest = m[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (greatest<m[i][j])
            {
                greatest = m[i][j];
            }
            if (smallest>m[i][j])
            {
                smallest = m[i][j];
            }
        }
    }
    
    printf("Max and Min number respectively are %d and %d", greatest, smallest);

    return 0;
}