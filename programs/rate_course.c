#include <stdio.h>

int rate_course();

int main() {
    int rating = rate_course();
    printf("Course Rating : %d/10",rating);
    return 0;
}

int rate_course(){
    int rating;
    printf("Enter the course rating: ");
    scanf("%d",&rating);

    return rating;
}