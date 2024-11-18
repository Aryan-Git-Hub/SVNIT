#include<stdio.h>

int main() {
    // initializing an array
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int* ptr = arr;
    int temp[n];
    printf("Your array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
        temp[i] = *(ptr+i);
    }
    printf("\nCopy array using pointers is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", temp[i]);
    }

    return 0;
}