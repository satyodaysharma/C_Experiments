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

    printf("The Entered three values are: a = %.2f, b = %.2f, c = %.2f", a, b, c);

    if (a>b)
    {
        printf("\nThe Biggest number is: a = %.2f", a);
    }

    if (b>c)
    {
        printf("\nThe biggest number is: b = %.2f", b);
    }

    if (c>a)
    {
        printf("\nThe Biggest number is: c = %.2f", c);

        return 0;
    }
    
    
    

    return 0;
}
