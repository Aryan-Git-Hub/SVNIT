#include<stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int odd = 0;
    int count[10];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]%2==1)
        {
            odd += 1;
        }

        count[i] = 0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i]==arr[j])
            {
                count[i] += 1;
            }
        }

        printf("The no. of times element %d occurs: %d\n", arr[i], count[i]);
    }

    printf("Total no. of odd numbers are: %d", odd);
    

    return 0;
}