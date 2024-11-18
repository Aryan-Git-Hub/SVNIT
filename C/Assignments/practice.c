// #include<stdio.h>
// #include<string.h>

// int main() {
//     char arr[50];
//     printf("Enter any string: ");
//     fgets(arr, 50, stdin);
//     char* p = arr;

//     for (int i = 0; i < strlen(arr); i+=2)
//     {
//         printf("%c", *(p+i));
//     }
    

//     return 0;
// }

#include<stdio.h>
int* alter_arr(int n, int arr[]) {
    int temp[(n+1)/2];
    int j = 0;
    for (int i = 0; i < n; i+=2)
    {
        temp[j] = arr[i];
        j++;
    }
    int* ptr = temp;
    return ptr;
    
}
int main() {
    // initializing an array
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int* new_arr = alter_arr(n, arr);

    return 0;
}