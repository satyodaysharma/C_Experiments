#include<stdio.h>

int main()
{
    float a, b, c;

    printf("Please Enter the First Number: ");
    scanf("%f", &a);

    printf("Please Enter the Second Number: ");
    scanf("%f", &b);

    printf("Please Enter the Third Number: ");
    scanf("%f", &c);

    printf("The Entered three values are: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);

    if (a >= b && a >= c)
    {
        printf("The Biggest number is: a = %.2f\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("The Biggest number is: b = %.2f\n", b);
    }
    else
    {
        printf("The Biggest number is: c = %.2f\n", c);
    }

    return 0;
}
