#include<stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    printf("Sum of 10 integers are: %d", sum);
    
    return 0;
}