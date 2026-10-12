#include<stdio.h>

int main(){

    FILE *fp;

    fp = fopen("notes.txt","r");

    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    char ch = fgetc(fp);
    printf("First character: %c\n", ch);

    fseek(fp, 5*sizeof(char), SEEK_SET);

    ch = fgetc(fp);
    printf("After fseek: %c\n", ch);

    rewind(fp);

    ch = fgetc(fp);
    printf("After rewind: %c\n", ch);

    fclose(fp);

    return 0;
}