#include<stdio.h>

int main() {
    int n;
    printf("How many no.'s you wanna add: ");
    scanf("%d", &n);
    printf("Enter the no.'s: ");

    int temp;
    int greatest1 = 0;
    int greatest2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (temp>greatest1)
        {
            greatest2 = greatest1;
            greatest1 = temp;
        } else if (temp>greatest2)
        {
            greatest2 = temp;
        }  
    }
    
    printf("Max and 2nd Max no.'s are %d and %d respectively!", greatest1, greatest2);

    return 0;
}