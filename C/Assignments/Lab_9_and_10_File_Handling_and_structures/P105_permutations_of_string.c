#include<stdio.h>
#include<string.h>

char* lexicographical_str(char s[]) {
    char* ptr;
    int n = strlen(s);
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[n-i-1]>s[n-i-2])
        {
            index = n-i-2;
            break;
        }
    }

    if (index==-1)
    {
        return ptr;
    } else
    {
        char temp_char;
        int a;
        for (int i = index; i < n; i++)
        {
            if (s[i]>s[index])
            {
                temp_char = s[i]; // i
                a = i;
            }
        }

        s[a] = s[index];
        s[index] = temp_char; // i
        

        // for sorting
        char temp3;
        for (int j = index+1; j < n-1; j++)
        {
            for (int i = index+1; i < n-1; i++)
            {
                if (s[i]>s[i+1])
                {
                    temp3 = s[i];
                    s[i] = s[i+1];
                    s[i+1] = temp3;
                }
            }
        }
        ptr = s;
        return ptr;
    }
}

int factorial(int n) {
    if (n<1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

char* sort_str_ptr(char s[]) {
    int l = strlen(s);
    char temp;
    for (int i = 0; i < l-1; i++)
    {
        for (int j = 0; j < l-i-1; j++)
        {
            if (s[j]>s[j+1])
            {
                // Swap the strings
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    char* ptr = s;
    return ptr;
}

int main() {
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    char* ptr;
    
    ptr = sort_str_ptr(str);
    for (int i = 0; i < len; i++)
    {
        str[i] = *(ptr+i);
    }
    
    
    for (int i = 0; i < factorial(len); i++)
    {
        printf("%s ", str);
        ptr = lexicographical_str(str);
        for (int j = 0; j < len; j++)
        {
            str[j] = *(ptr+j);
        }
        str[len] = '\0';
    }
    
    

    return 0;
}