#include <stdio.h>

int main()
{
    int n;
    long double factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        factorial *= i;
    }

    printf("Factorial = %Le\n", factorial);

    return 0;
}