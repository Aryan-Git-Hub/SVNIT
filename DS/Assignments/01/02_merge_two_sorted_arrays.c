#include<stdio.h>
#include<stdlib.h>

void swap(int* n1, int* n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int arr1[5] = {1, 4, 6, 8, 9};
    int arr2[5] = {2, 3, 6, 7, 9};
    int size_of_arr = sizeof(arr1)/sizeof(int);
    int n = 2*size_of_arr;
    int* arr = (int*)malloc(size_of_arr*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        if (i<size_of_arr) arr[i] = arr1[i];
        else arr[i] = arr2[i-size_of_arr];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1]) swap(&arr[j], &arr[j+1]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}