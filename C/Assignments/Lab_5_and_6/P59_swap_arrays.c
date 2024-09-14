#include<stdio.h>

int main() {
    int arr1[10], arr2[10];
    printf("Enter 10 integer for Array 1:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 integer for Array 2:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[10];
    for (int i = 0; i < 10; i++)
    {
        arr3[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = arr3[i];
    }
    
    printf("Array 1 after swaping: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    printf("\nArray 2 after swaping: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}