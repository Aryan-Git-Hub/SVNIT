#include<stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    char* ptr = str;
    int len = 0;
    int i = 1;
    while (i)
    {
        if (*(ptr+i-1)=='\0')
        {
            break;
        }
        
        if (*(ptr+i-1)!=' ')
        {
            len++;
        }
        i++;
    }
    
    printf("Length of string is %d", len);

    return 0;
}