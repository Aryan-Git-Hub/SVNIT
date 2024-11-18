#include<stdio.h>

int main() {
    char line[100];
    printf("Enter a line of string: ");
    scanf("%[^\n]%*c", line);

    int words = 1, i = 0;
    char* ptr = line;
    while (1)
    {
        if (*(line+i)=='\0')
        {
            break;
        }
        if (*(line+i)==' ')
        {
            words++;
        }
        i++;
    }
    printf("Number of words are %d", words);

    
    return 0;
}