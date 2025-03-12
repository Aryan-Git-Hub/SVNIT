#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n;
    printf("Enter the size of array to add elements in linked list: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(sizeof(int)*n);
    printf("Enter elements in array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    // adding array elements to linked list
    struct Node* Head;
    Head = NULL;
    struct Node* temp;
    for (int i = 0; i < n; i++)
    {
        if (Head==NULL) {
            Head = (struct Node*) malloc(sizeof(struct Node));
            Head->data = arr[i];
            Head->next = NULL;
        }
        else
        {
            temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = arr[i];
            temp->next = Head;
            Head = temp;
        }
    }
    
    // display linked list
    temp = Head;
    printf("Head--->");
    while(temp)
    {
        printf(" %d, ", temp->data);
        temp = temp->next;
    }
    printf("<---Tail\n");

    free(Head);
    free(temp);

    return 0;
}