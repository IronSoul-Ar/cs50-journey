#include <stdio.h>
#include <cs50.h>
int main(void){
    int scores[3];
    int result = 0;
    int length = get_int("how much scores: ");
    for (int i = 0; i < length; i++){
        scores[i] = get_int("nom: ");
        result += scores[i];
    }
    printf("average %.2f \n", result/(float)length);
}
