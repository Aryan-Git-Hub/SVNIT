#include<stdio.h>
#include<string.h>

int main() {
    int N;
    printf("How many words you wanna enter: ");
    scanf("%d", &N);
    char s[100];
    for (int k = 0; k < N; k++)
    {
        scanf("%s", s);
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
            printf("no answer\n\n");
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
            printf("%s\n\n", s);
        }
    }

    return 0;
}