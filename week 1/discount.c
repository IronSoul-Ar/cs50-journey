#include <stdio.h>
#include <cs50.h>

float discount(float price, int discount);
int main(void){
    printf("If you want to khow the price of something after a discount, This program is for you! \n");
    char answer = get_char("So what do you thing?(y/n) ");
    if (answer == 'y' || answer == 'Y')
    {
        float price = get_float("What is the price? ");
        int percent = get_int("Okay, What about the discount? ");
        float sale = discount(price, percent);
        printf("Oh, the price now is %.2f \n",sale);
    }
    else
    {
        printf("sorry \n");
    }
}

float discount(float price, int discount){
    return price * (100 - discount)/100;
}
