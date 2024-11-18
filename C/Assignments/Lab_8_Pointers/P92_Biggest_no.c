#include<stdio.h>

int main() {
    // Taking array as an input
    int n;
    printf("Enter size of list: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter list of numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    int* ptr = arr;
    int biggest = *ptr;
    for (int i = 0; i < n; i++)
    {
        if (*(ptr+i)>biggest)
        {
            biggest = *(ptr+i);
        }
    }

    printf("Biggest number among given list is %d", biggest);
    

    return 0;
}