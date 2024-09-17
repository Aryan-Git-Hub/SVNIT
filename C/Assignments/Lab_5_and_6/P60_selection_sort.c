#include<stdio.h>

int main() {
    int n;
    printf("How many elements you wanna add in an array: ");
    scanf("%d", &n);
    printf("Enter %d elements to array:\n", n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest;
    int small_index;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        smallest = arr[i];
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<smallest)
            {
                smallest = arr[j];
                small_index = j;
                a = 1;
            }
        }
        if (a==1)
        {
            arr[small_index] = arr[i];
            arr[i] = smallest;
            a = 0;
        }
    }

    printf("Array after Selection Sort: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}