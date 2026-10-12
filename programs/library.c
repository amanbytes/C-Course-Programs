#include <stdio.h>

#define MAX_BOOKS 100

typedef struct {
    char name[50];
    char city[30];
    char country[30];
} Publisher;

typedef struct {
    char title[100];
    char author[50];
    float price;
    int bookID;
    int available;

    Publisher publisher;

} Book;


void input_book(Book *book);
void display_book(Book book);
void display_library(Book library[],int count);

int main() {
    
    Book library[MAX_BOOKS];
    int choice;
    int count = 0;

    do {
        printf("\n========== Library Management ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            input_book(&library[count]);
            count++;
            break;
        case 2:
            display_library(library, count);
            break;
        case 3:
            printf("\nThank you!\n");
            break;
        default:
            printf("\nInvalid Choice!\n");
        }
    } while (choice != 3);

    return 0;
    
}

void input_book(Book *book){
        printf("Enter Title: ");
        scanf(" %[^\n]", book->title);

        printf("Enter Author: ");
        scanf(" %[^\n]", book->author);

        printf("Enter Price: ");
        scanf("%f", &book->price);

        printf("Enter Book ID: ");
        scanf("%d", &book->bookID);

        printf("Available (1/0): ");
        scanf("%d", &book->available);

         printf("Publisher Name: ");
        scanf(" %49[^\n]", book->publisher.name);

        printf("Publisher City: ");
        scanf(" %29[^\n]", book->publisher.city);

        printf("Publisher Country: ");
        scanf(" %29[^\n]", book->publisher.country);
}

void display_book(Book book){
        printf("Title        : %s\n", book.title);
        printf("Author       : %s\n", book.author);
        printf("Price        : %.2f\n", book.price);
        printf("Book ID      : %d\n", book.bookID);
        printf("Publisher : %s\n", book.publisher.name);
        printf("City      : %s\n", book.publisher.city);
        printf("Country   : %s\n", book.publisher.country);
        printf("Availability : %s\n",
            book.available ? "Available" : "Not Available");
}

void display_library(Book library[],int count){
    printf("\nLibrary Books\n");
    printf("-------------\n");

    for (int i = 0; i < count; i++){
        printf("\nBook       : %d\n", i + 1);
        display_book(library[i]);

    }
}