#include<stdio.h>

int main() {
    int a;
    printf("Enter any no. to find its prime: ");
    scanf("%d", &a);

    int c = 0;
    for (int i=2; i<a; i++)
    {  
        if (a%i==0){
            c++;
        }
    }
    if (c==0)
    {
        printf("Prime Number");
    } else {
        printf("Composite Number");
    }

    return 0;
}