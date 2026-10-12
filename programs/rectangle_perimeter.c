#include <stdio.h>

int calculatePerimeter(int length, int width);

int main()
{
    int length, width;

    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the width: ");
    scanf("%d", &width);

    int perimeter = calculatePerimeter(length, width);

    printf("Perimeter of the rectangle = %d\n", perimeter);

    return 0;
}

int calculatePerimeter(int length, int width)
{
    return 2 * (length + width);
}