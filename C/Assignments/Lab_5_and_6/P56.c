#include<stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int positive, negative, zeros;
    positive = 0;
    negative = 0;
    zeros = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]<0)
        {
            negative += 1;
        } else if (arr[i]==0)
        {
            zeros += 1;
        } else
        {
            positive += 1;
        }
    }
    printf("TOTAL NO. OF POSITIVE, NEGATIVE, AND ZERO ELEMENTS RESPECTIVELY ARE: %d, %d AND %d", positive, negative, zeros);
    
    return 0;
}