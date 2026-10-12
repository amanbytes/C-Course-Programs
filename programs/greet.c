#include<stdio.h>

void welcome();
void showMenu();
void thankYou();

int main(){
    welcome();
    showMenu();
    thankYou();
    return 0;
}

void welcome()
{
    printf("Welcome to AmanBytes!\n");
}

void showMenu()
{
    printf("1. Subscribe\n");
    printf("2. Comment\n");
    printf("3. Like\n");
}

void thankYou()
{
    printf("Thank you for watching!\n");
}