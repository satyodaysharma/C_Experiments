#include<stdio.h>

int main()
{
    char character;

    printf("Please enter a Character: ");

    if(scanf(" %c", &character) != 1)
    {
        printf("Error! Invalid Inpur.");
    }
    else if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z')
    {
        printf("The character '%c' is an Alphabet.", character);
    }
    else
    printf("The character '%c' is not an Alphabet.", character);
    return 0;
}
