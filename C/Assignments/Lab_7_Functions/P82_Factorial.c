#include<stdio.h>

int factorial(int n) {
    if (n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int n, r;
    printf("Enter the value of 'n' and 'r' respectively: ");
    scanf("%d %d", &n, &r);
    int NCR = factorial(n)/(factorial(n-r)*factorial(r));
    printf("%d", NCR);

    return 0;
}