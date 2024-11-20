#include<stdio.h>
#include<stdlib.h>

struct book
{
    char book_name[40];
    char author_name[40];
    int pages;
};

void read_book(struct book* b) {
    printf("Enter book name: ");
    fgets(b->book_name, 40, stdin);
    printf("Enter author name: ");
    fgets(b->author_name, 40, stdin);
    printf("Enter number of pages: ");
    scanf("%d", &b->pages);
}

void display_book(struct book* b) {
    printf("Name of Book: %s", b->book_name);
    printf("Name of Author: %s", b->author_name);
    printf("Number of pages of this book is %d", b->pages);
}

int main() {
    struct book* b = (struct book*)malloc(sizeof(struct book*));
    read_book(b);
    printf("\n");
    display_book(b);


    return 0;
}