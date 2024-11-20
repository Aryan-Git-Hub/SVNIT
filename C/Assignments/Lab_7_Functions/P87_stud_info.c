#include<stdio.h>
#include<stdlib.h>

struct student
{
    int stud_no;
    char stud_name[40];
    int stud_marks;
};


void read_stud_info(struct student* s) {
    printf("Enter name of student %d: ", s->stud_no);
    scanf("%s", s->stud_name);
    printf("Enter marks of student %d: ", s->stud_no);
    scanf("%d", &s->stud_marks);
}

void display_stud_info(struct student* s) {
    printf("Student no.: %d\n", s->stud_no);
    printf("Name of Student: %s\n", s->stud_name);
    printf("Marks: %d\n", s->stud_marks);
}


int main() {
    struct student* s = (struct student*)malloc(sizeof(struct student*));
    
    for (int i = 1; i <= 10; i++)
    {
        s->stud_no = i;
        read_stud_info(s);
        if (s->stud_marks>500)
        {
            printf("\n");
            display_stud_info(s);
            printf("\n");
        }
    }
    

    return 0;
}