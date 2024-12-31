#include<stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    printf("Please enter the First Number: ");
    scanf("%lf", &num1);

    printf("Please enter the operation you want to perform(+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Please enter the Second Number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':

        result = num1 + num2;
        printf("The result is: %.2lf\n", result);

        break;

    case '-':

    result = num1 - num2;
    printf("The result is: %.2lf\n", result);

    break;

    case '*':

    result = num1 * num2;
    printf("The result is: %.2lf\n", result);

    break;

    case '/':

    
    if (num2 == 0)
    {
        printf("Opps! Divison by zero is not allowed.");
    }
    else
    {
        result = num1 / num2;
        printf("The result is: %.2lf\n", result);
    }
    break;
    default:

    printf("Error! Invalid operator.\n");
        break;
    }
    return 0;

}
