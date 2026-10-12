#include<stdio.h>

#define SIZE 5

void input_marks(int marks[], int size);
float calculate_average(int marks[], int size);
int find_maximum(int marks[], int size);
int find_minimum(int marks[], int size);
int search_mark(int marks[], int size, int target);

int main(){

    int marks[SIZE];
    int target;

    input_marks(marks,SIZE);

    printf("\nAverage Marks = %.2f\n", calculate_average(marks,SIZE));
    printf("\nMaximum Marks = %d\n", find_maximum(marks,SIZE));
    printf("\nMinimum Marks = %d\n", find_minimum(marks,SIZE));

    printf("\nEnter the mark to search: ");
    scanf("%d", &target);

    int index = search_mark(marks,SIZE,target);

    if (index != -1) {
        printf("%d found at position %d.\n", target, index + 1);
    } else {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}


void input_marks(int marks[], int size) {
    printf("Enter marks of %d students:\n", size);

    for (int i = 0; i < size; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

float calculate_average(int marks[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++){
        sum += marks[i];
    }

    return (float)sum / size;
}

int find_maximum(int marks[], int size) {
    int max = marks[0];

    for (int i = 1; i < size; i++){
        if (marks[i] > max){
            max = marks[i];
        }
    }
    
    return max;
}

int find_minimum(int marks[], int size) {
    int min = marks[0];

    for (int i = 1; i < size; i++) {
        if (marks[i] < min) {
            min = marks[i];
        }
    }

    return min;
}

int search_mark(int marks[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (marks[i] == target) {
            return i;
        }
    }
    
    return -1;
}