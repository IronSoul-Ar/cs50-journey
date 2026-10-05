#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Name: ");
    int lenght = strlen(name);
    printf("%i\n", lenght);

    //There is another way if string.h is not used.

    string name2 = get_string("Name: ");
    int i = 0;
    while (name2[i] != '\0')
    {
        i++;
    }
    printf("%i\n", i);
}
