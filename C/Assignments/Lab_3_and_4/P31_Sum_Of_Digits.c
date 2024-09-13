#include<stdio.h>

int main() {
    int n, temp, d;
    printf("Enter any number: ");
    scanf("%d", &n);
    temp = n;
    
    int sum = 0;
    while (temp>0)
    {
        d = temp%10;
        temp /= 10;
        sum += d;
    }

    printf("Sum of Digits: %d", sum);

    return 0;
}