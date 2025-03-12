#include<stdio.h>

void swap(int* n1, int* n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int n = 10;
    int arr[10] = {-1, -45, 23, 34, 65, 43, -57, 86, -23, -98};
    int start = 0, end = n-1;
    while (start<end)
    {
        if (arr[start]>0 & arr[end]<0)
        {
            swap(&arr[start], &arr[end]);
            start++;
            end--;
        }
        else if (arr[start]<0 & arr[end]<0) start++;
        else end--;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}