#include<stdio.h>

int prime(int n) {
    int a = 1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            a = 0;
        }
    }
    printf("%d", a);
    return a;
    
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    prime(n);
    
    return 0;
}