#include<stdio.h>

int main() {
    float unit;
    printf("Enter the amount of unit: ");
    scanf("%f", &unit);

    float charge;

    if (unit<=200)
    {
        charge = unit*0.5/100;
    } else if (unit<=400)
    {
        charge = 100 + unit*0.65/100;
    } else if (unit<=600)
    {
        charge = 230 + unit*0.80/100;
    } else
    {
        charge = 425 + unit*1.25/100;
    }

    printf("Commission = %f", charge);
    return 0;
}