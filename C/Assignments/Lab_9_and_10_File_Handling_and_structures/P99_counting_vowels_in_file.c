#include<stdio.h>

int main() {
    FILE* f_ptr = fopen("./test.txt", "r");
    char ch = fgetc(f_ptr);
    char v[11] = "AEIOUaeiou";
    int count = 0;
    if (f_ptr!=NULL)
    {
        while (1)
        {
            if (ch!=EOF)
            {
                for (int i = 0; i < 11; i++)
                {
                    if (ch==v[i])
                    {
                        count++;
                        break;
                    }
                }
                ch = fgetc(f_ptr);
            } else {
                break;
            }
        }
        
    } else {
        printf("File not open!");
    }
    
    printf("There are %d vowels in this file", count);
    fclose(f_ptr);

    return 0;
}