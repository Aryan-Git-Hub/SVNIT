#include<stdio.h>

int main() {
    FILE* f_ptr = fopen("./test.txt", "r");
    int ch_count = 0, word_count = 1, line_count = 1;
    char ch;
    if (f_ptr!=NULL)
    {
        while (1)
        {
            if ((ch=fgetc(f_ptr))!=EOF)
            {
                if (ch==' ')
                {
                    word_count++;
                } else if (ch=='\n')
                {
                    line_count++;
                } else
                {
                    ch_count++;
                }
            } else
            {
                if (ch_count==0)
                {
                    ch_count = 0, word_count = 0, line_count = 0;
                }
                break;
            }
        }
        printf("Number of characters, words, lines in this file respectively are %d, %d and %d", ch_count, word_count, line_count);
    } else
    {
        printf("File doesn't exists!");
    }
    
    

    return 0;
}