#include<stdio.h>

void even_odd(int n) {
    if (n%2==0)
    {
        printf("Even");
    } else
    {
        printf("Odd");
    }
}

int main() {
    printf("Enter any integer: ");
    int a;
    scanf("%d", &a);
    even_odd(a);

    return 0;
}