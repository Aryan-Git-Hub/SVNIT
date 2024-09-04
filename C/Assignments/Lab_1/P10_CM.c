#include<stdio.h>

int main() {
    int m, p, c;
    printf("Enter your marks in Mathematics out of 200: ");
    scanf("%d", &m);
    printf("Enter your marks in Physics out of 200: ");
    scanf("%d", &p);
    printf("Enter your marks in Chemistry out of 200: ");
    scanf("%d", &c);

    float e = (m+p+c)/6;
    float cm = m/2 + p/2 + c/2 + e;

    printf("CM = M/2+P/2+C/2+E = %f", cm);

    return 0;
}