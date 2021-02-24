// 1. (a) WAP to evaluate power of a number

#include <stdio.h>

int main()
{
    int a, b;
    double result = 1;

    // Taking input for base & power
    printf("Enter base = ");
    scanf("%d", &a);

    printf("Enter power = ");
    scanf("%d", &b);

    // Calculating result according to nature of base
    if (b < 0)
    {
        for (int i = 0; i > b; i--)
        {
            result *= 1 / (float)a; // If power is negative then we have to divide by base continuosly
        }
        printf("The result is %0.3f\n", result);
    }
    else if (b >= 0)
    {
        for (int i = 0; i < b; i++)
        {
            result *= a; //If power is positive then we have to multiply by base continuosly
        }
        printf("The result is %0.0f\n", result);
    }
    else
    {
        printf("You ahve entered incorrect values\n");
    }

    return 0;
}