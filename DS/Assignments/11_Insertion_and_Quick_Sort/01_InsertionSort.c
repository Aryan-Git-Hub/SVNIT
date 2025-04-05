#include<stdio.h>

int main() {
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if(arr[j-1]>arr[j]) {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) printf("%d, ", arr[i]);
    printf("\n");

    return 0;
}