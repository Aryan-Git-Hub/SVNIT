#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c, s;
    printf("Enter the value of side a: ");
    scanf("%d", &a);
    printf("Enter the value of side b: ");
    scanf("%d", &b);
    printf("Enter the value of side c: ");
    scanf("%d", &c);

    s = (a+b+c)/2;
    float area = pow(s*(s-a)*(s-b)*(s-c), 0.5);
    printf("Your required area is: %f", area);

    return 0;
}