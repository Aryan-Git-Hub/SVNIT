#include<stdio.h>
#include<math.h>

int flip(int n, int count) {
    int arr[count];
    int temp = n;
    for (int i = 0; i < count; i++)
    {
        arr[i] = temp%10;
        temp /= 10;
    }
    temp *= pow(10, count);
    for (int i = 0; i < count; i++)
    {
        temp += arr[i]*pow(10, count-i-1);
    }
    
    return temp;
}

int main() {
    int n, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter last 'n' digits that you want to flip: ");
    scanf("%d", &count);
    printf("Number after flip is %d", flip(n, count));

    return 0;
}