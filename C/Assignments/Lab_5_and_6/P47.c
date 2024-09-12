#include<stdio.h>

int main() {
    printf("Enter an alphabet in capital letter: ");
    char c;
    scanf("%c", &c);

    for (int i = 65; i <= c; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");   
    }
    
    return 0;
}