#include<stdio.h>
#define PI 3.14

int main() {
    float area, r;
    printf("Enter value: ");
    scanf("%f", &r);
    area = PI*r*r;
    printf("Area of circle is %f", area);

    return 0;
}