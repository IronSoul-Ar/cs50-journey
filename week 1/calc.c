#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("This is an integer addition calculator \n");
    long num1 = get_long("enter a number here: ");
    long num2 = get_long("and enter the second one here: ");
    printf("The result: %li \n", num1 + num2);
}
