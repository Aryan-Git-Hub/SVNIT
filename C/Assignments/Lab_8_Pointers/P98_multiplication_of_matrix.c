#include<stdio.h>
#include<stdlib.h>

int main() {
    int rows = 3;
    int cols = 3;
    // Step 1: Allocate memory for the array of pointers (rows)
    int** ptr_m1 = (int**) malloc(rows*sizeof(int*));
    int** ptr_m2 = (int**) malloc(rows*sizeof(int*));
    int** ptr_m = (int**) malloc(rows*sizeof(int*));

    // Step 2: Allocate memory for each row
    for (int i = 0; i < rows; i++)
    {
        ptr_m1[i] = (int*)malloc(cols * sizeof(int));
        ptr_m2[i] = (int*)malloc(cols * sizeof(int));
        ptr_m[i] = (int*)malloc(cols * sizeof(int));
    }
    

    printf("Enter the Matrix 1:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &ptr_m1[i][j]); // (*(ptr_m1+i)+j)
        }
        printf("\n");
    }

    printf("Enter the Matrix 2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ptr_m2[i][j]);
        }
        printf("\n");
    }


    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += ptr_m1[j][k]*ptr_m2[k][i];
            }
            ptr_m[j][i] = sum;
            sum = 0;
        }
    }

    printf("Multiplication of Matrix 1 and Matrix 2 are:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ptr_m[i][j]);
        }
        printf("\n");
    }
    
    free(ptr_m1);
    free(ptr_m2);
    free(ptr_m);
    return 0;
}