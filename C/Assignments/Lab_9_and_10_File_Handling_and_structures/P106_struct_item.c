#include<stdio.h>
#include<stdlib.h>

struct item
{
    char item_name[30];
    int quantity;
    int price;
    int amount;
};

void read_item(struct item* i) {
    printf("Enter name of item: ");
    scanf("%s", i->item_name);
    printf("Enter quantitiy of this item: ");
    scanf("%d", &i->quantity);
    printf("Enter price of this item: ");
    scanf("%d", &i->price);
    i->amount = i->quantity*i->price;

    printf("\nYour item details are:\n");
    printf("\tItem name: %s\n", i->item_name);
    printf("\tItem quantity: %d\n", i->quantity);
    printf("\tItem price: %d\n", i->price);
    printf("\tItem total amount: %d\n", i->amount);
}

int main() {
    struct item* i1 = (struct item*)malloc(sizeof(struct item*));
    read_item(i1);

    return 0;
}