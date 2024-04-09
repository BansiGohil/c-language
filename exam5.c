// structure to represent a book .list n number of book's details using array of objects.
#include <stdio.h>
#define MAX_BOOKS 100
struct Book {
    char title[100];
    char author[100];
    float price;
};

void inputBooks(struct Book books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
}
void displayBooks(struct Book books[], int n) {
    printf("List of books:\n");
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: $%.2f\n", books[i].price);
    }
}

int main() {
    int n;
    struct Book books[MAX_BOOKS];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    if (n > MAX_BOOKS || n <= 0) {
        printf("Invalid number of books.\n");
        return 1;
    }

    inputBooks(books, n);
    displayBooks(books, n);

    return 0;
}