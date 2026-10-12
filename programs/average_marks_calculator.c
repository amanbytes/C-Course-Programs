#include<stdio.h>

int main(){
    int total_marks;
    int subjects;

    printf("Enter total marks: ");
    scanf("%d", &total_marks);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    printf("\nWithout Type Casting : %d\n", total_marks / subjects);
    printf("With Type Casting    : %.2f\n",(float)total_marks / subjects);


}