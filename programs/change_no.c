#include <stdio.h>

void changeNumber(int *num)
{
    *num = 100;
}
int main()
{
    int number = 10;

    changeNumber(&number);

    printf("%d", number);

    return 0;
}