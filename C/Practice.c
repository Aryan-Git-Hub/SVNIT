// #include<stdio.h>
// #define PI 3.14

// int main() {
//     float area, r;
//     printf("Enter value: ");
//     scanf("%f", &r);
//     area = PI*r*r;
//     printf("Area of circle is %f", area);

//     return 0;
// }



// ***********************************************************************************************************
// #include<stdio.h>

// int main() {
//     int a, b;
//     printf("Enter two numbers a and b:\n");
//     scanf("%d%d", &a, &b);
//     if (a>b)
//     {
//         printf("%d is greater than %d", a, b);
//     } else if (a<b)
//     {
//         printf("%d is greater than %d", b, a);
//     } else
//     {
//         printf("a and b both are equal");
//     }

//     return 0;
// }



// ***********************************************************************************************************
// #include<stdio.h>

// int main() {
//     int a;
//     printf("Enter any no. from 1 to 7: ");
//     scanf("%d", &a);
    
//     switch (a)
//     {
//     case 1:
//         printf("Sunday");
//         break;
//     case 2:
//         printf("Monday");
//         break;
//     case 3:
//         printf("Tuesday");
//         break;
//     case 4:
//         printf("Wednesday");
//         break;
//     case 5:
//         printf("Thursday");
//         break;
//     case 6:
//         printf("Friday");
//         break;
//     case 7:
//         printf("Saturday");
//         break;
//     default:
//         printf("There is no such type of day no. in a week");
//     }

//     return 0;
// }



// ***********************************************************************************************************
// #include<stdio.h>

// int main() {
//     int m, s, e;
//     printf("Enter marks in Mathematics out of 100: ");
//     scanf("%d", &m);
//     printf("Enter marks in Science out of 100: ");
//     scanf("%d", &s);
//     printf("Enter marks in English out of 100: ");
//     scanf("%d", &e);

//     if (m>100 || s>100 || e>100)
//     {
//         printf("Incorrect Data!");
//     } else
//     {   
//         if (m>=35)
//         {
//             printf("PASS in Mathematics\n");
//         } else
//         {
//             printf("FAIL in Mathematics\n");
//         }
        
//         if (s>=35)
//         {
//             printf("PASS in Science\n");
//         } else
//         {
//             printf("FAIL in Science\n");
//         }

//         if (e>=35)
//         {
//             printf("PASS in English\n");
//         } else
//         {
//             printf("FAIL in English\n");
//         }
//     }

//     float percentage = (m+s+e)/3;
//     printf("Your overall percentage is %f", percentage);

//     return 0;
// }



// ***********************************************************************************************************

// #include<stdio.h>

// int main() {
//     int i=1, j=0;
//     j = i++ + ++i;
//     printf("%d %d", i, j);

//     return 0;
// }



// ***********************************************************************************************************
// #include<stdio.h>

// int main() {
//     int i = 1;
//     do
//     {
//         printf("5 x %d = %d\n", i, 5*i);
//         i++;
//     } while (i<=10);
    
//     return 0;
// }



// ***********************************************************************************************************
#include<stdio.h>

int main() {
    for (int i=1; i<=10; i++)
    {
        printf("5 x %d = %d\n", i, 5*i);
    }
    
    return 0;
}