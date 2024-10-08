#include<stdio.h>

int main() {
    int n1, n2;
    printf("How many element you wanna add in array 1: ");
    scanf("%d", &n1);
    int arr1[n1];

    for (int i = 0; i < n1; i++)
    {
        printf("Enter the value of element at index %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("How many element you wanna add in array 2: ");
    scanf("%d", &n2);
    int arr2[n2];

    for (int i = 0; i < n2; i++)
    {
        printf("Enter the value of element at index %d: ", i);
        scanf("%d", &arr2[i]);
    }



    int n = n1+n2;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        if (i<n1)
        {
            arr[i] = arr1[i];
        } else
        {
            arr[i] = arr2[i-n1];
        }
    }

    printf("Your Final Array after concatinating array 1 and array 2 is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Your final Array after Sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}