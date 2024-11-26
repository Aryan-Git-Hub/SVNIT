#include<stdio.h>
#define MACRO(x,y) (x>y?x:y)

int main() {
    int a = 4, b = 2;
    printf("%d", MACRO(a, b));

    return 0;
}