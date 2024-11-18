#include<stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    char* ptr = str;
    int len = 0;
    int i = 0;
    while (1)
    {
        if (*(ptr+i)=='\0')
        {
            break;
        }
        
        if (*(ptr+i)!=' ')
        {
            len++;
        }
        i++;
    }
    
    printf("Length of string is %d", len);

    return 0;
}