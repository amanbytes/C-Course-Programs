#include <stdio.h>

int main() {
    int trumpTweet, war;

    printf("Did Trump tweet today?: ");
    scanf("%d", &trumpTweet);

    if (trumpTweet == 1){
        
        printf("Was it about war?: ");
        scanf("%d", &war);

        if (war == 1){
            printf("Oil prices: Uppppp :/\n");
        } else {
            printf("We're safe... for now.\n");
        }
        
    } else {
        printf("Markets had a peaceful day.\n");
    }

    return 0;
}