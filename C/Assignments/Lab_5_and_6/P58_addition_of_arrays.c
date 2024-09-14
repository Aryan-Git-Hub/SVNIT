#include<stdio.h>

int main() {
    int arr1[10], arr2[10];
    printf("Enter 10 integer for array 1:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 integer for array 2:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int sum_arr[10];
    for (int i = 0; i < 10; i++)
    {
        sum_arr[i] = arr1[i]+arr2[i];
    }

    printf("Sum of array 1 and array 2 is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", sum_arr[i]);
    }
    
    

    return 0;
}