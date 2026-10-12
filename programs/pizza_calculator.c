#include <stdio.h>

const float SMALL_PRICE = 249.0f;
const float MEDIUM_PRICE = 399.0f;
const float LARGE_PRICE = 599.0f;

float get_pizza_price(char pizza_size);

float calculate_discount(int quantity, char is_member, float total_price);

void print_bill(char pizza_size, int quantity, 
    float discount, float total_price);

int main() {
    
    char choice = 'N';

    do {
        
        int quantity = 0;
        double restraunt_rating = 4.85454454;
        float pizza_price = 0.0;
        char pizza_size = 'M';
        char is_member;

        printf("Enter Pizza Size (S/M/L): ");
        scanf(" %c", &pizza_size);

        printf("Enter the quanity: ");
        scanf("%d",&quantity);

        printf("Are you a member? (Y/N): ");
        scanf(" %c", &is_member);

        pizza_price =  get_pizza_price(pizza_size);

        float total_price = pizza_price * quantity;
        float discount = calculate_discount(quantity, is_member, total_price);

        total_price -= discount;

        print_bill(pizza_size, quantity, discount, total_price);

        printf("\nAnother order? (Y/N): ");
        scanf(" %c", &choice);

    }while(choice == 'Y' || choice == 'y');

    printf("\nThank you! Have a great day!\n");

    return 0;
}

float get_pizza_price(char pizza_size) {

    switch(pizza_size) {

        case 'S':
        case 's':
            return SMALL_PRICE;

        case 'M':
        case 'm':
            return MEDIUM_PRICE;

        case 'L':
        case 'l':
            return LARGE_PRICE;

        default:
            printf("\nInvalid Pizza Size!\n");
            return 0;
    }
}

float calculate_discount(int quantity, char is_member, float total_price) {

    float discount = 0.0f;

    if(quantity >= 10) {
        discount = 300;
        printf("\nMega Order! Flat 300 discount applied.\n");

    }
    else if(quantity >= 5) {
        discount = 100;
        printf("\nBulk Order! Flat 100 discount applied.\n");

    }
    else {
        printf("\nRegular Order. No discount available.\n");
        printf("Order %d more to get a discount!\n", 5 - quantity);

    }

    if((is_member == 'Y' || is_member == 'y') && total_price >= 2000) {
        discount += 50;
        printf("Member Bonus: Extra 50 OFF\n");

    }
    
    return discount;
}


void print_bill(char pizza_size, int quantity, float discount, float total_price){
        printf("\n------ Bill ------\n");
        printf("PizzaSize : %c\n", pizza_size);
        printf("Quantity : %d\n", quantity);
        printf("Discount : %.2f\n", discount);
        printf("Final Bill : %.2f\n", total_price);
}