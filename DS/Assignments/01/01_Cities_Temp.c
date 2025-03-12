#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int c1[365], c2[365], c3[365], c4[365], c5[365];
    float avg1 = 0, avg2 = 0, avg3 = 0, avg4 = 0, avg5 = 0;
    srand(time(NULL));


    for (int i=0; i<365; i++) {
        c1[i] = rand() % 21 + 20; 
        c2[i] = rand() % 21 + 20; 
        c3[i] = rand() % 21 + 20; 
        c4[i] = rand() % 21 + 20; 
        c5[i] = rand() % 21 + 20;

        // adding them
        avg1 = (avg1 + c1[i])/2;
        avg2 = (avg2 + c2[i])/2;
        avg3 = (avg3 + c3[i])/2;
        avg4 = (avg4 + c4[i])/2;
        avg5 = (avg5 + c5[i])/2;

        if (i == 364) {
            printf("Avg temperature of city 1 was %.2f degrees\nAvg temperature of city 2 was %.2f degrees\nAvg temperature of city 3 was %.2f degrees\nAvg temperature of city 4 was %.2f degrees\nAvg temperature of city 5 was %.2f degrees\n", avg1, avg2, avg3, avg4, avg5);
        }
    }

    printf("\nOverall average temperature of all 5 year data is: %.2f degree C", (avg1 + avg2 + avg3 + avg4 + avg5)/5);

    return 0;
}
