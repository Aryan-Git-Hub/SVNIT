#include<stdio.h>

int main() {
    int n;
    printf("How many no.'s you wanna add: ");
    scanf("%d", &n);
    printf("Enter the no.'s: ");

    int temp;
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (temp>max)
        {
            max = temp;
        }
        if (i==0)
        {
            min = temp;
        }
        if (temp<min)
        {
            min = temp;
        }
    }
    
    printf("Max and Min no.'s are %d and %d respectively!", max, min);

    return 0;
}