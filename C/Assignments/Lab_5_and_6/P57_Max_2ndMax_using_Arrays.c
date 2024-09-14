#include<stdio.h>

int main() {
    int n;
    printf("Enter any no. greater than 2: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    
    int greatest;
    int no_for_2nd_greatest = 0;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i==0)
        {
            greatest = arr[0];
        } else if (arr[i]>=greatest)
        {
            if (greatest<arr[i])
            {
                arr2[no_for_2nd_greatest] = greatest;
                no_for_2nd_greatest += 1;
            }
            greatest = arr[i];
        } else
        {
            arr2[no_for_2nd_greatest] = arr[i];
            no_for_2nd_greatest += 1;
        }
    }
    printf("First greatest no. is %d\n", greatest);

    int greatest2 = arr2[0];

    for (int i = 0; i < no_for_2nd_greatest; i++)
    {
        if (arr2[i]>=greatest2)
        {
            greatest2 = arr2[i];
        }
    }
    printf("Second greatest no. is %d\n", greatest2);


    return 0;
}