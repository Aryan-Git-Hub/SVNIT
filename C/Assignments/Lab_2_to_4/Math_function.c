#include<stdio.h>
#include<math.h>

int main() {
    float n, x, op;
    printf("Enter the value of 'n' and 'x': ");
    scanf("%f%f", &n, &x);
    if (n==1)
    {
        op = 1+x;
    } else if (n==2)
    {
        op = 1+x/n;
    } else if (n==3)
    {
        op = 1+pow(x, n);
    } else
    {
        op = 1+n*x;
    }

    printf("Your output is: %f", op);

    return 0;
}