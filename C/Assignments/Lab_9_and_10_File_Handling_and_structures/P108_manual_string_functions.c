#include<stdio.h>

int str_count(char str[]) {
    int i = 0;
    while (1)
    {
        if (str[i]=='\0')
        {
            break;
        }
        i++;
    }
    return i;
}

int main() {
    printf("A. COPY ONE STRING INTO ANOTHER:\n");
    char str1[20] = "Aryan";
    char str2[20];

    char* ptr = str1;

    int i = 0;
    while (1)
    {
        if (str1[i]!='\0')
        {
            str2[i] = *(ptr+i);
        } else
        {
            break;
        }
        i++;
    }
    str2[i] = '\0';
    printf("String 1 is: %s\n", str1);
    printf("String 2 is: %s\n", str2);
    
    
    int str1_count = str_count(str1);
    int str2_count = str_count(str2);
    printf("B. COMPARE TWO STRINGS:\n");
    int len = str1_count>str2_count?str2_count:str1_count;
    for (int i = 0; i < len; i++)
    {
        if (str1[i]-str2[i]==0 && i!=len-1)
        {
            continue;
        } 
        if (str1[i]-str2[i]==0 && i==len-1)
        {
            printf("%d\n", 0);
            break;
        }
        printf("%d\n", str1[i]-str2[i]);
        break;
    }
    


    printf("C. CONCAT TWO STRINGS:\n");
    char str_cat[50];
    for (int i = 0; i < str1_count; i++)
    {
        str_cat[i] = str1[i];
    }
    for (int i = str1_count; i < str1_count+str_count(str2); i++)
    {
        str_cat[i] = str2[i-str1_count];
    }
    str_cat[str1_count+str2_count] = '\0';
    printf("%s\n", str_cat);
    

    printf("D. REVERSE A GIVEN STRING:\n");
    char rev_str[20];
    for (int i = 0; i < str1_count; i++)
    {
        rev_str[i] = str1[str1_count-i-1];
    }
    rev_str[str1_count] = '\0';
    printf("%s", rev_str);

    return 0;
}