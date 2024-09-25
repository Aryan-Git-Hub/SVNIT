#include<stdio.h>

void palindrome(int n) {
    int temp, d;
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
    if (n1==palindrome)
    {
        printf("%d is a Palindrome", n1);
    } else
    {
        printf("%d is not a Palindrome", n1);
    }
}

int main() {
    int a;
    printf("Enter any no. to check whether is it palindrome or not: ");
    scanf("%d", &a);
    palindrome(a);

    return 0;
}