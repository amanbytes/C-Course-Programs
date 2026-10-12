#include<stdio.h>

union Payment{
    float cash;
    long long cardNumber;
    char upiID[50];
};


int main(){

    union Payment payment;

    payment.cash = 250.50;
    printf("Cash Paid: %.2f\n", payment.cash);
    payment.cardNumber = 342342342;
    printf("Cash Paid: %.2f\n", payment.cash);
    printf("Card Number: %lld\n", payment.cardNumber);

    return 0;

}