#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[5];
    int i;

    printf("Enter details of 5 books:\n");

    for(i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter title: ");
        scanf(" %[^\n]", books[i].title);  // reads string with spaces

        printf("Enter author: ");
        scanf(" %[^\n]", books[i].author);

        printf("Enter price: ");
        scanf("%f", &books[i].price);
    }

    printf("\n------ Book Details ------\n");
    for(i = 0; i < 5; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title : %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price : %.2f\n", books[i].price);
    }
return 0;
}
