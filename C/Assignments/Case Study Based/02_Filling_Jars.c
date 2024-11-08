#include<stdio.h>

int main() {
    int N, M;
    printf("Enter the value of 'N' jars and 'M' operations respectively: ");
    scanf("%d %d", &N, &M);

    int a, b, k;
    int total = 0;

    int c = 1;
    for (int i = 1; i <= M; i++)
    {
        printf("Enter the value of 'a', 'b' and 'k' for %d operation respectively: ", i);
        scanf("%d %d %d", &a, &b, &k);
        if (a>0 && b>0 && b<=N && a<N) total += k*(b-a+1);
        else {
            c = 0;
            break;
        }
    }

    if (c) printf("Average is %d", total/N);
    else printf("Wrong Input!");

    return 0;
}