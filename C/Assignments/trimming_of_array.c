#include<stdio.h>
#include<stdlib.h>
int k;
int* trim_arr(int arr[], int n) {
    int *ptr_arr;
    int* temp_arr = (int*)malloc(n*sizeof(int));
    k = -1;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (arr[i]==temp_arr[j])
            {
                a = 0;
                break;
            }
        }
        if (a)
        {
            k++;
            temp_arr[k] = arr[i];
        }
        a = 1;
    }
    k++;
    return temp_arr;
}

int main() {
    int n;
    printf("Enter no. of element in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr_arr = trim_arr(arr, n);
    printf("\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", *(ptr_arr+i));
    }

    free(ptr_arr);


    return 0;
}