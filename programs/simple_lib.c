#include<stdio.h>

typedef struct
{
    int bookID;
    char title[50];
    float price;
} Book;

int main(){

    Book book = {102, "E Programming", 599.99};

    FILE *fp = fopen("books.dat", "ab");

    fwrite(&book,sizeof(Book),1,fp);

    fclose(fp);

    return 0;
}