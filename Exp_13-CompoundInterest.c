#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    double principle, rate, time, CompoundInterest, amount;
    printf("Please enter the principle amount: ");
    scanf("%lf", &principle);

    printf("Please enter the annual interest rate in (%%): ");
    scanf("%lf", &rate);

    printf("Please enter the time period (In years): ");
    scanf("%lf", &time);

    printf("Please enter the number of times interest compounded per year: ");
    scanf("%d", &x);

    rate = rate/100;

    amount = principle * pow(1 + (rate / x), x * time);

    CompoundInterest = amount - principle;

    printf("Total amount (Principal + Interest): %.2lf\n", amount);
    printf("Compound Interest: %.2lf\n", CompoundInterest);

    return 0;
}
