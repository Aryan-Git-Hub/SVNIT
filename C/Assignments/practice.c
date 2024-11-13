#include<stdio.h>
#include<string.h>

int main() {
    char arr[50];
    printf("Enter any string: ");
    fgets(arr, 50, stdin);
    char* p = arr;

    for (int i = 0; i < strlen(arr); i+=2)
    {
        printf("%c", *(p+i));
    }
    

    return 0;
}