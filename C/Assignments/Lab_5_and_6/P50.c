#include<stdio.h>

int main() {
    char c;
    printf("Enter any character in capital letter: ");
    scanf("%c", &c);

    for (int i = 65; i <= c; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    
    return 0;
}