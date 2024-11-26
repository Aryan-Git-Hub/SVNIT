#include <stdio.h>
int main()
{
    enum colour {
        no_color = 0,
        white,
        red,
        green,
        blue,
        black
    };
    int n;
    printf("choose any number between (0-5)\nchoose '0' for exiting the program\n");
    while (n)
    {
        printf("Enter number:");
        scanf("%d", &n);
        switch (n)
        {
            case no_color:
                break;
            case white:
                printf("WHITE:#FFFFFF\n");
                break;
            case red:
                printf("RED:#FF0000\n");
                break;
            case green:
                printf("GREEN:#00FF00\n");
                break;
            case blue:
                printf("BLUE:#0000FF\n");
                break;
            case black:
                printf("BLACK:#000000\n");
                break;
            default:
                printf("NO valid colour available\n");
        }
    }
}