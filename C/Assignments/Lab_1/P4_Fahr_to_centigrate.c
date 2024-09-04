#include<stdio.h>

int main() {
    // °C = (°F - 32) × 5/9;
    float f, c;
    printf("Enter the temperature in FAHRENHEIT: ");
    scanf("%f", &f);

    c = (f-32)*5/9;
    printf("Temperature in CENTIGRADE: %f", c);

    return 0;
}