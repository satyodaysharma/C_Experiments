#include<stdio.h>

int main()
{
   float a, b, t;

   printf("Please enter the First number: ");
   scanf("%f", &a);

   printf("Please enter the Second Number: ");
   scanf("%f", &b);

   printf("The values before swaping are: a = %.2f, b = %.2f", a, b);

   t = a;
   a = b;
   b = t;

   printf("\nThe values after swaping are: a = %.2f, b = %.2f", a, b);

   return 0;
}
