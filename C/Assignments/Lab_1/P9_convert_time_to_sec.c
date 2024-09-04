#include<stdio.h>

int main() {
    int h, m, s;

    printf("Enter hours: ");
    scanf("%d", &h);
    
    printf("Enter minutes: ");
    scanf("%d", &m);

    printf("Enter seconds: ");
    scanf("%d", &s);

    int seconds = h*60*60 + m*60 + s;
    printf("\nTotal seconds: %d", seconds);

    return 0;
}