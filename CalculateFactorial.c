#include<stdio.h>

int main()
{
    int a,x,z=1;

    printf("Please enter the number you want factorial of: ");
    scanf("%d", &a);

    for(x=1; x<=a; x++)
    {
        z = z*x;
    }
    printf("The factorial of %d is = %d",a, z);

    return 0;
}
