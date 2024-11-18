#include<stdio.h>
#include<string.h>

int main() {
    // initializing a string
    char str[20];
    printf("Enter your string: ");
    scanf("%[^\n]%*c", str);
    printf("Your string is: %s", str);

    int n = strlen(str);
    char* ptr = str;
    char temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = *(ptr+n-i-1);
    }
    printf("\nCopy array using pointers is: %s", temp);


    return 0;
}