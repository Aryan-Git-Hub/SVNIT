#include<stdio.h>

int main() {
    int amt;
    float inst, year, famt;
    printf("Enter the amount that you have to apply for simple interest: ");
    scanf("%d", &amt);
    printf("How much interest, you wanna apply: ");
    scanf("%f", &inst);
    printf("Enter the time you have to apply simple interest in year: ");
    scanf("%f", &year);
    famt = amt+(amt*inst/100*year);
    printf("Your final amount calculated is: %f", famt);

    return 0;
}