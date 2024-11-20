#include<stdio.h>

int len(char line[]) {
    int l = 0;
    while (1)
    {
        if (line[l]=='\0')
        {
            break;
        }
        l++;
    }
    return l;
}

int main() {
    char line[100];
    printf("Enter a line of text: ");
    scanf("%[^\n]s", line);

    printf("Length of line of text is %d", len(line));

    return 0;
}