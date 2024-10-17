#include<stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int rev_arr[n];
    for (int i = 0; i < n; i++)
    {
        rev_arr[i] = arr[n-i-1];
    }
    
    printf("Reverse of this Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rev_arr[i]);
    }

    return 0;
}