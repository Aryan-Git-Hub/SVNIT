#include <stdio.h>
#include <stdlib.h>

int contains(int list[], int num, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (list[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    printf("Enter the length of array: ");
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *store = (int *)calloc(10, sizeof(int));
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (!contains(store, arr[i], index))
        {
            *(store + index++) = arr[i];
        }
    }

    printf("Unique elts: \n");
    for (int i = 0; i < index; i++)
    {
        printf("%d\n", store[i]);
    }

    free(store);

    return 0;
}