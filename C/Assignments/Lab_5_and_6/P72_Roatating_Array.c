#include<stdio.h>

int main() {
    int n;
    printf("How many element you wanna add in array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    

    int r;
    printf("Enter the value of N to rotate an array by N positions: ");
    scanf("%d", &r);
    r = r%n;
    

    printf("Your Original Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int temp[n];
    for (int i = 0; i < r; i++)
    {
        temp[0] = arr[n-1];
        for (int i = 0; i < n-1; i++)
        {
            temp[i+1] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }
    

    printf("Your Rotating Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}