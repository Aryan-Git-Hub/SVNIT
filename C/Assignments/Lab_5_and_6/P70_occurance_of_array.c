#include<stdio.h>

int main() {
    int n;
    printf("How many elements you wanna add in an array: ");
    scanf("%d", &n);
    printf("Enter %d elements to array:\n", n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int elem;
    printf("Which element do you want to search?\n");
    scanf("%d", &elem);

    int a = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (elem==arr[i])
        {
            count += 1;
            a = 1;
        }
    }

    if (a==0)
    {
        printf("Element not found!");
    } else
    {
        printf("%d found %d times", elem, count);
    }
    

    return 0;
}