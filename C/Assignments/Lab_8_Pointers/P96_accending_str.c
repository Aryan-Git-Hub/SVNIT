#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    printf("How many strings you wanna enter: ");
    scanf("%d", &n);

    // creating dynamic 2D array
    char **ptr_str = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        ptr_str[i] = (char *)malloc(40 * sizeof(char));
        printf("Enter string %d: ", i + 1);
        scanf("%s", ptr_str[i]);
    }


    char temp[40];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (strcmp(ptr_str[j], ptr_str[j+1])>0)
            {
                // Swap the strings
                strcpy(temp, ptr_str[j]);
                strcpy(ptr_str[j], ptr_str[j+1]);
                strcpy(ptr_str[j+1], temp);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s ", ptr_str[i]);
    }

    return 0;
}