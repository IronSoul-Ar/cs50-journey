#include <stdio.h>
#include <cs50.h>

int main(void){
    string name = get_string("what's your name? ");
    int age1 = get_int("how old are you? ");
    printf("so, you are %s and you have %i \n", name, age1);
    char answer1 = get_char("do you have a brother? (y/n)");
    if (answer1 == 'y' || answer1 == 'Y'){
        int age2 = get_int("how old is your brother? ");
        if (age1 < age2){
            printf("so, your brother is %i years older than you \n", age2 - age1);
    }
        else if (age1 > age2){
            printf("so, your brother is %i years younger than me \n", age1 - age2);
    }
        else if (age1 == age2){
            printf("so you have the same age \n");
    }
    }
    else if (answer1 == 'n' || answer1 == 'N'){
        char answer2 = get_char("do you have a sister? (y/n)");
        if (answer2 == 'y' || answer2 == 'Y'){
            int age3 = get_int("how old is your sister? ");
            if (age1 < age3){
            printf("so, your sister is %i years older than you \n", age3 - age1);
    }
            else if (age1 > age3){
            printf("so, your sister is %i years younger than me \n", age1 - age3);
    }
            else if (age1 == age3){
            printf("so you have the same age \n");
    }
    }
        else if (answer2 == 'n' || answer2 == 'N'){
            printf("sorry \n");
    }
}
}
