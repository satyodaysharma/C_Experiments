#include<stdio.h>

int main()
{  
    char Operator;
    double a, b, result;

    printf("Please enter the First Value: ");
    scanf("%1f", &a);

    
    printf("\nPlease write the operation you want to perform (+, -, *, /) ");
    scanf(" %c", &Operator);

    printf("\nPlease enter the Second Value: ");
    scanf("%1f", &b);

    switch (Operator)
    {
    case '+':
        result = a + b;
        printf("%21f + %21f = %21f", a, b, result);
        break;

        case '-':
        result = a - b;
        printf("%21f - %21f = %21f", a, b, result);
        break;

        case '*':
        result = a * b;
        printf("%21f * %21f = %21f", a, b, result);

        case '/':
        if(b != 0)
        {   
            result = a/b;
            printf("%21f/%21f = %21f", a, b, result);
        }

        else{
            printf("Error! Division by 0 is not allowed.\n");
        }
        break;

    default:

    printf("Error! Invalid oberator.\n");
        break;
    }
}
