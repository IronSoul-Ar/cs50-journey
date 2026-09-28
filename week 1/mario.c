#include <stdio.h>
#include <cs50.h>

int main(void){
    int count;
    do{
        count = get_int("count: ");
    }while (count < 1);

    for (int i = 0; i < count; i++){
        for (int j = 0; j < count; j++)
        {
            printf("#");

        }
        printf("\n");
    }

}
