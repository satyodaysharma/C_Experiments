#include<stdio.h>

int main()
{
   float a, b, t;

   printf("Please enter the First Number: ");
   scanf("%f", &a);

   printf("Please enter the Second Number: ");
   scanf("%f", &b);

   printf("The values before swapping are: a = %.2f, b = %.2f", a, b);

   t = a;
   a = b;
   b = t;

   printf("\nThe values after swapping are: a = %.2f, b = %.2f", a, b);

   return 0;
}
