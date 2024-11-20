#include<stdio.h>

struct item
{
    char item_name[30];
    int quantity;
    int price;
};


int main() {
    struct item i1 = {"item 1", 5, 200};
    printf("%d", i1.price);

    return 0;
}