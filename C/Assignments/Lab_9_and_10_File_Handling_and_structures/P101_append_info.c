#include<stdio.h>

int main() {
    FILE* f_ptr = fopen("LNMIITSTUDENT.JAVA", "a");
    char info[100] = "";
    printf("Enter the information you wanna add in 'LNMIITSTUDENT.JAVA': ");
    fgets(info, 100, stdin);
    fputs(info, f_ptr);
    fclose(f_ptr);

    return 0;
}