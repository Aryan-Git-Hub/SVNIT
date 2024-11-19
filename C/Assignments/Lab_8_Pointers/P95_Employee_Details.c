#include<stdio.h>
#include <stdlib.h>

struct emp
{
    int no;
    char name[20];
    int basic_pay;
};


int main() {
    struct emp* ptr = (struct emp*)malloc(sizeof(struct emp));
    struct emp emp_arr[50];
    int N;
    printf("How many employee deatails you wanna enter? ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        ptr->no = i;
        printf("Enter name of employee %d: ", i);
        scanf("%s", ptr->name);
        printf("Enter basic pay of employee %d: ", i);
        scanf("%d", &ptr->basic_pay);
        emp_arr[i-1] = *ptr;
    }
    
    for (int i = 0; i < N; i++)
    {
        printf("Deltails of Employee number %d is:\n", i+1);
        printf("\tName: %s\n", emp_arr[i].name);
        printf("\tBasic pay: %d\n", emp_arr[i].basic_pay);
    }
    

    return 0;
}