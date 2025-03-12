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
    struct Node* temp2;
    for (int i = 0; i < n; i++)
    {
        if (Head==NULL) {
            Head = (struct Node*) malloc(sizeof(struct Node));
            scanf("%d", &Head->data);
            Head->next = NULL;
            temp2 = Head;
        }
        else
        {
            temp = (struct Node*)malloc(sizeof(struct Node));
            scanf("%d", &temp->data);
            temp->next = NULL;
            temp2->next = temp;
            temp2 = temp;
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
    free(temp2);

    return 0;
}