#include<stdio.h>

int main()
{
    float a, b, c, d, e; 

    printf("Enter the marks obtained in First Subject: "); 
    scanf("%f", &a);

    printf("Enter the marks obtained in Second Subject: ");
    scanf("%f", &b);

    printf("Enter the marks obtained in Third Subject: ");
    scanf("%f", &c);

    printf("Enter the marks obtained in Fourth Subject: ");
    scanf("%f", &d);

    printf("Enter the marks obtained in Fifth Subject: ");
    scanf("%f", &e);
    
    float sum=(a+b+c+d+e)/5;
    printf("The obtained Percentage are: %.2f ", sum);

    return 0;

}
