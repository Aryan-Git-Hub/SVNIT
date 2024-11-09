#include<stdio.h>
#include<string.h>

int s_contain_temp(char arr[], char temp) {
    for (int i = 0; i < strlen(arr); i++)
    {
        if (temp==arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    printf("Enter number of rocks: ");
    scanf("%d", &n);

    char s[100][100];

    for (int i = 0; i < n; i++)
    {
        printf("Enter composition of rock %d: ", i+1);
        scanf("%s", s[i]);
    }
    
    int smallest = 0;
    for (int i = 0; i < n; i++)
    {
        if (strlen(s[i])<strlen(s[smallest]))
        {
            smallest = i;
        }
    }


    // removing duplicate characters
    char trim_s[100];
    int l = strlen(s[smallest]);
    int k = -1;
    for (int i = 0; i < l; i++)
    {
        if (s_contain_temp(trim_s, s[smallest][i]))
        {
            continue;
        } else
        {
            k++;
            trim_s[k] = s[smallest][i];
        }
    }


    int temp, temp2;
    int gems = 0;
    for (int i = 0; i < strlen(trim_s); i++)
    {
        temp = trim_s[i];

        temp2 = 0;
        for (int k = 0; k < n; k++)
        {
            if (s_contain_temp(s[k], temp))
            {
                temp2 += 1;
            } else
            {
                break;
            }
        }
        if (temp2==n) gems += 1;
        
    }
    
    printf("Total number of Gems are %d", gems);

    return 0;
}