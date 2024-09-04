#include<stdio.h>
#include<math.h>

int main() {
    int n, arm, temp, d;
    printf("Enter any no. to check whether is it a Armstrong no. or not: ");
    scanf("%d", &n);

    int count = 0;
    temp = n;
    while (n>0)
    {
        n /= 10;
        count++;
    }
    n = temp;
    arm = 0;
    while (temp>0)
    {
        d = temp%10;
        temp /= 10;
        arm += pow(d, count);
    }
    
    if (arm==n)
    {
        printf("%d is an Armstrong Number", n);
    } else
    {
        printf("%d is not an Armstrong Number", n);
    }
    
    

    return 0;
}