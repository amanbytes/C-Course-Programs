#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main(){

    int choice;
    int a, b;

    int (*operation)(int, int);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1:
            operation = add;
            break;

        case 2:
            operation = subtract;
            break;

        case 3:
            operation = multiply;
            break;

        default:
            printf("Invalid Choice\n");
            return 0;
    }

    printf("Result = %d\n", operation(a, b));

    return 0;

}