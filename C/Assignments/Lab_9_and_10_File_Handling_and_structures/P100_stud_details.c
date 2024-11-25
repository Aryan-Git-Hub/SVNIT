#include<stdio.h>

int main() {
    FILE* f_ptr = fopen("LNMIITSTUDENT.JAVA", "w");
    int n, total_marks, N;
    char name[20];
    printf("How many student details you wanna add? ");
    scanf("%d", &N);
    char str[20];
    for (int i = 1; i <= N; i++)
    {
        n = i;
        printf("Enter student Name: ");
        scanf("%s", name);
        printf("Enter total marks of student: ");
        scanf("%d", &total_marks);

        fputs("Student roll no. is ", f_ptr);
        sprintf(str, "%d", n);
        fputs(str, f_ptr);
        fputs("\n", f_ptr);

        fputs("Student name is ", f_ptr);
        fputs(name, f_ptr);
        fputs("\n", f_ptr);
        
        fputs("Student total marks is ", f_ptr);
        sprintf(str, "%d", total_marks);
        fputs(str, f_ptr);
        fputs("\n\n", f_ptr);
    }

    return 0;
}