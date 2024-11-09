#include<stdio.h>

int no_contains_digit(int n, int count, int d) {
    for (int i = 0; i < count; i++)
    {
        if (d==n%10)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int trim(int n, int count) {
    int t = 0, d;
    for (int i = 0; i < count; i++)
    {
        d = n%10;
        if (!no_contains_digit(t, count, d)) t = t*10+d;
        n /= 10;
    }
    return t;
}

int main() {
    int T;
    printf("Enter number of test cases: ");
    scanf("%d", &T);

    int n, count, temp, total_digits;
    for (int i = 0; i < T; i++)
    {
        printf("Enter the number %d: ", i+1);
        scanf("%d", &n);

        count = 0;
        temp = n;
        while (temp)
        {
            temp /= 10;
            count++;
        }

        temp = trim(n, count);
        total_digits = 0;
        for (int i = 0; i < count; i++)
        {
            if (n%(temp%10)==0)
            {
                total_digits += 1;
            }
            temp /= 10;
        }

        printf("Total number of digits are: %d\n", total_digits);
    }


    return 0;
}