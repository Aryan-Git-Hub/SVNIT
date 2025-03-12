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