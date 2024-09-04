#include<stdio.h>

int main() {
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);

    int a = (c>='a' && c<='z')?(1):(0);

    if (a)
    {
        printf("This is lower case character");
    } else
    {
        printf("This is not a lower case character");
    }

    return 0;
}