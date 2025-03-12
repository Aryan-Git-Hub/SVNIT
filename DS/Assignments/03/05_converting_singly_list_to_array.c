#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n;
    printf("Enter no. of elements you wanna enter in linked list: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    
    // adding array elements to linked list
    struct Node* Head;
    Head = NULL;
    struct Node* temp;
    for (int i = 0; i < n; i++)
    {
        if (Head==NULL) {
            Head = (struct Node*) malloc(sizeof(struct Node));
            scanf("%d", &Head->data);
            Head->next = NULL;
        }
        else
        {
            temp = (struct Node*)malloc(sizeof(struct Node));
            scanf("%d", &temp->data);
            temp->next = Head;
            Head = temp;
        }
    }
    
    // converting linked list to array
    temp = Head;
    int* arr = (int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp->data;
        temp = temp->next;
    }

    // displaying array
    printf("array =");
    for (int i = 0; i < n; i++) printf(" %d,", arr[i]);
    printf("\n");

    free(Head);
    free(temp);

    return 0;
}