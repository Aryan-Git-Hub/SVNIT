#include<stdio.h>

int main() {
    int n, temp, d;
    printf("Enter any number: ");
    scanf("%d", &n);
    
    temp = n;
    int n1 = n;
    int index = 1;
    while (n>0)
    {
        n /= 10;
        index *= 10;
    }
    int palindrome = 0;
    while (temp>0)
    {
        d = temp%10;
        temp /= 10;
        palindrome += d*index/10;
        index /= 10;
    }
    
    printf("Reverse of %d is %d", n1, palindrome);

    return 0;
}