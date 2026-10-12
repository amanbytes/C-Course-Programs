#include <stdio.h>
#include <stdlib.h>

int main(){

    int *numbers;
    
    int n;

    printf("How many numbers? ");
    scanf("%d", &n);

    numbers = calloc(5,sizeof(int));

    int sum = 0;

    printf("Enter %d numbers:\n", n);

    for(int i=0;i<n;i++){
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    float average = (float)sum / n;

    printf("Average = %.2f", average);

    return 0;
}