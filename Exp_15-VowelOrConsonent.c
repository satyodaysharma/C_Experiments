#include<stdio.h>

int main()
{
    char character;

    printf("Please enter a character: ");

    if (scanf(" %c", &character) != 1)
    {
        printf("Error! Invalid Input.\n");
    }
    else if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || 
             character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
    {
        printf("The character '%c' is a Vowel.\n", character);
    }
    else if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        printf("The character '%c' is a Consonant.\n", character);
    }
    else
    {
        printf("The character '%c' is not an Alphabet.\n", character);
    }

    return 0;
}
