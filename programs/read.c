#include <stdio.h>

typedef struct
{
    int bookID;
    char title[50];
    float price;
} Book;

int main() {

    Book temp;

    FILE *fp = fopen("books.dat", "rb");

    fseek(fp,2*sizeof(Book), SEEK_SET);

    fread(&temp, sizeof(Book), 1, fp);

    printf("Book ID : %d\n", temp.bookID);
    printf("Title   : %s\n", temp.title);
    printf("Price   : %.2f\n", temp.price);

    printf("Current Position: %ld\n", ftell(fp));

    rewind(fp);

    printf("Rewinding to the beginning...\n\n");

    while(fread(&temp, sizeof(Book), 1, fp)) {

    printf("Book ID : %d\n", temp.bookID);
    printf("Title   : %s\n", temp.title);
    printf("Price   : %.2f\n", temp.price);

    }
    
    fclose(fp);

    return 0;
}