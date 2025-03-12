#include<stdio.h>
#include<stdlib.h>

int main() {
    int m = 3, n = 4;

    // initializing matrix
    int** m1 = (int**)malloc(m*sizeof(int*));
    int** m2 = (int**)malloc(m*sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        m1[i] = (int*)malloc(n*sizeof(int));
        m2[i] = (int*)malloc(n*sizeof(int));
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m1[i][j] = i+j;
            m2[i][j] = i+2*j;
        }
    }

    printf("Matrix 1:");
    for (int i = 0; i < m; i++)
    {
        printf("\n\t");
        for (int j = 0; j < n; j++)
        {
            printf("%d ", m1[i][j]);
        }
    }

    printf("\nMatrix 2:");
    for (int i = 0; i < m; i++)
    {
        printf("\n\t");
        for (int j = 0; j < n; j++)
        {
            printf("%d ", m2[i][j]);
        }
    }
    
    printf("\n\n");
    int equal_or_not = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (m1[i][j]!=m2[i][j])
            {
                equal_or_not = 0;
                break;
            }
        }
    }

    if (equal_or_not) {
        printf("Equal");
    } else {
        printf("Not Equal");
    }

    return 0;
}