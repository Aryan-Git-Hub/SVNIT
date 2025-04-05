#include<stdio.h>

int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int n = 5;
    for (int i = 0; i < n-1; i++)
    {
        int min_j = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min_j]>arr[j]) min_j = j;
        }
        int temp = arr[i];
        arr[i] = arr[min_j];
        arr[min_j] = temp;
    }
    
    for (int i = 0; i < n; i++) printf("%d, ", arr[i]);
    printf("\n");

    return 0;
}