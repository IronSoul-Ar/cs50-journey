#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After U1: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    //another way

    printf("After U2: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");

    //if you need lower case not upper case

    printf("After L1: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (islower(s[i]) == 0)
        {
            printf("%c", s[i] + 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    // anoher way

    printf("After L2: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", tolower(s[i]));
    }
    printf("\n");
}
