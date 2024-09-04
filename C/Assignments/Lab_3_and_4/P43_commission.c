#include<stdio.h>

int main() {
    float sales;
    printf("Enter the amount of sales: ");
    scanf("%f", &sales);

    float commission;

    if (sales<=500)
    {
        commission = sales*5/100;
    } else if (sales<=2000)
    {
        commission = 35 + sales*10/100;
    } else if (sales<=5000)
    {
        commission = 185 + sales*12/100;
    } else
    {
        commission = sales*12.5/100;
    }

    printf("Commission = %f", commission);
    return 0;
}