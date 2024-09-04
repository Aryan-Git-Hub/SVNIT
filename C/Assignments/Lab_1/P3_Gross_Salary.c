#include <stdio.h>

int main() {
    float basic_salary, house_rent_allowance, dearness_allowance, conveyance_allowance, gross_salary;

    // Get basic salary from the user
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate allowances
    house_rent_allowance = 0.2 * basic_salary;
    dearness_allowance = 0.15 * basic_salary;
    conveyance_allowance = 1000;

    // Calculate gross salary
    gross_salary = basic_salary + house_rent_allowance + dearness_allowance + conveyance_allowance;

    // Print gross salary
    printf("Gross salary: %.2f\n", gross_salary);

    return 0;
}