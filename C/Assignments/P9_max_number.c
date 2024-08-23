#include<stdio.h>

int main() {
    printf("Enter three numbers: ");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a>b && a>c) {
        printf("A is greater");
    } else if (b>c && b>a) {
        printf("B is greater");
    } else {
        printf("C is greater");
    }
    
    
    

    return 0;
}