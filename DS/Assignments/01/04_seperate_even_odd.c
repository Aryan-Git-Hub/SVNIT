#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int* even = (int*)malloc(7*sizeof(int));
    int* odd = (int*)malloc(7*sizeof(int));

    int e = 0, o = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]%2==0)
        {
            even[e] = arr[i];
            e++;
        }
        else {
            odd[o] = arr[i];
            o++;
        }
    }

    for (int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }
    
    free(even);
    free(odd);

    return 0;
}