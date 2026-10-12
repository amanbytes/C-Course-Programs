#include <stdio.h>

#define SIZE 5

int main()
{
    char students[SIZE][30];

    printf("Enter the names of %d students:\n\n", SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%29s", students[i]);
    }

    printf("\nStudent List\n");
    printf("------------\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d. %s\n", i + 1, students[i]);
    }

    return 0;
}