#include <stdio.h>
#include <cs50.h>

int main(void){
    char n = get_char("do you want to know whether your age is an even or odd number?(y/n) ");
    if (n == 'y' || n == 'Y')
    {
        int num = get_int("How old are you? ");
        if (num % 2 == 0)
        {
            printf("your age is even \n");
        }
        else
        {
            printf("your age is odd \n");
        }
    }
    else if (n == 'n' || n == 'N')
    {
        printf("okey sorry \n");
    }
}
