#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc != 4) {
        printf("Usage: calculator.exe <number1> <operator> <number2>\n");
        printf("Example: calculator.exe 15 + 20\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);

    if(strcmp(argv[2], "+") == 0) {
        printf("Result = %d\n", num1 + num2);
    }
    else if(strcmp(argv[2], "-") == 0) {
        printf("Result = %d\n", num1 - num2);
    }
    else if(strcmp(argv[2], "*") == 0) {
        printf("Result = %d\n", num1 * num2);
    }
    else if(strcmp(argv[2], "/") == 0) {
        if(num2 == 0) {
            printf("Division by zero is not allowed.\n");
        }
        else {
            printf("Result = %.2f\n", (float)num1 / num2);
        }
    }
    else {
        printf("Invalid operator!\n");
    }

  return 0;

}