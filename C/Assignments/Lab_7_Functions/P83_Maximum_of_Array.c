#include<stdio.h>

int max_of_arr(int n, int arr[]) {
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

int main() {
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Maxmum number from this array is %d", max_of_arr(n, arr));

    return 0;
}