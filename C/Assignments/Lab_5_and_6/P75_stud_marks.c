#include<stdio.h>

int main() {
    int n = 3;
    int arr[n][4];
    
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = i+1;
        printf("Enter Marks of Student %d in subject 1 out of 100: ", i+1);
        scanf("%d", &arr[i][1]);
        printf("Enter Marks of Student %d in subject 2 out of 100: ", i+1);
        scanf("%d", &arr[i][2]);
        printf("Enter Marks of Student %d in subject 3 out of 100: ", i+1);
        scanf("%d", &arr[i][3]);
        printf("\n");
    }
    

    // (a) Total marks obtained by each student
    printf("\n");
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            sum += arr[i][j];
        }
        printf("Total marks of Student %d is %d\n", i+1, sum);
        sum = 0;
    }


    // (b) The highest marks in each subject and the Roll No. of the student who secured it
    printf("\n");
    int temp;
    int max = 0;
    int roll_no;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i][1];
        if (temp>max)
        {
            max = temp;
            roll_no = i+1;
        }
    }
    printf("Maximum Marks in Subject 1 is %d of Student %d\n", max, roll_no);
    
    temp = 0;
    max = 0;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i][2];
        if (temp>max)
        {
            max = temp;
            roll_no = i+1;
        }
    }
    printf("Maximum Marks in Subject 2 is %d of Student %d\n", max, roll_no);

    temp = 0;
    max = 0;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i][3];
        if (temp>max)
        {
            max = temp;
            roll_no = i+1;
        }
    }
    printf("Maximum Marks in Subject 3 is %d of Student %d\n", max, roll_no);


    // (c) The student who obtained the highest total marks.
    printf("\n");
    temp = 0;
    sum = 0;
    max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            sum += arr[i][j];
        }
        temp = sum;
        if (temp>max)
        {
            max = temp;
            roll_no = i+1;
        }
        sum = 0;
    }
    printf("Maximum marks obtained by Student %d and Marks is %d", roll_no, max);

    return 0;
}