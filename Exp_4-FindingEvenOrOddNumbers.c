#include<stdio.h>

int main()
{
    int a;

    printf("Please enter a number to check if it is even or odd: ");
    scanf("%d", &a);

    if (a%2 == 0)
    {
        printf("%d is a even number", a);
    }

    else
    {
        printf("%d is a odd number", a);
    }

    return 0;
}
