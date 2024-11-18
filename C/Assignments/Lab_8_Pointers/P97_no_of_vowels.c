#include<stdio.h>
#include<string.h>

int main() {
    char str[40];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    char v[11] = "AEIOUaeiou";
    char* ptr = str;
    int v_count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (*(ptr+i)==v[j])
            {
                v_count++;
            }
        }
    }
    
    printf("Number of vowel count is %d", v_count);

    return 0;
}