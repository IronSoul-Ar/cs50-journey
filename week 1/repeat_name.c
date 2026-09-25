#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("What do you think if I tell you I would repeat your name many time. \n");
    char answer = get_char("So are you excited?(y/n) ");
    if (answer == 'y' || answer == 'Y')
    {
        string name = get_string("what's your name? ");
        int num = get_int("how many time? ");
        for (int i = 0; i < num; i++)
        {
            printf("%s \n", name);
        }
    }
    else
    {
        printf("okay by \n");
    }
}
