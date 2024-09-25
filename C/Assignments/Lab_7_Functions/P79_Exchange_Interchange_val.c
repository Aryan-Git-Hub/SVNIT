#include<stdio.h>

void exchange_val(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;

    printf("Value of 'X' becomes: %d\n", a);
    printf("Value of 'Y' becomes: %d", b);
}

int main() {
    int x, y;
    printf("Enter the vlaue of X and Y respectively: ");
    scanf("%d%d", &x, &y);
    exchange_val(x, y);

    return 0;
}