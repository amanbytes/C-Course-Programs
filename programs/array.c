#include <stdio.h>

void change(int arr[]) {
    arr[0] = 100;
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    change(numbers);

    printf("%d",numbers[0]);

    return 0;
}
