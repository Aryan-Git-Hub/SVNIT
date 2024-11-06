#include<stdio.h>

int vowel_or_not(char c) {
    char arr[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==c)
        {
            return 1;
        }
    }
    return 0;
}


int main() {
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);
    int a = vowel_or_not(c);
    if (a)
    {
        printf("It is a vowel");
    } else
    {
        printf("It is not a vowel");
    }
    
    return 0;
}