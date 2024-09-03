#include<stdio.h>

int main() {
    int a, b;
    printf("Enter two no.:\n");
    scanf("%d%d", &a, &b);
    
    int c = a;
    for (int i=1; i<b; i++)
    {
        c = c*a;
    }
    printf("\n%d", c);
    

    return 0;
}