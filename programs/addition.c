#include <stdio.h>

int add_number(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int sum = add_number(num1,num2);

    printf("Sum : %d\n",sum);

    return 0;
}

int add_number(int num1, int num2){
    return num1 + num2;
}
