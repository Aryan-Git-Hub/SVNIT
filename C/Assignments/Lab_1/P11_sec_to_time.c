#include<stdio.h>

int main() {
    printf("Enter total seconds: ");
    int s;
    scanf("%d", &s);
    int sec_rem = s%(60*60*24);
    int days = (s-sec_rem)/(60*60*24);
    int sec_rem_hours = sec_rem%(60*60);
    int hours = (sec_rem-sec_rem_hours)/(60*60);
    int sec_rem_min = sec_rem_hours%60;
    int minutes = (sec_rem_hours-sec_rem_min)/60;
    printf("%d days, %d hours, %d minutes, %d seconds", days, hours, minutes, sec_rem_min);

    return 0;
}