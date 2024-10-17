#include<stdio.h>

int main() {
    int a;
    printf("Enter any no. to find its prime: ");
    scanf("%d", &a);

    int c = 1;
    for (int i=2; i<a; i++)
    {  
        if (a%i==0){
            c = 0;
            break;
        }
    }
    if (c)
    {
        printf("No. is Prime");
    } else {
        printf("No. is not prime");
    }

    return 0;
}