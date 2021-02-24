// 1. (c) WAP to evaluate square root of a number

#include <stdio.h>
#include <math.h>

int main()
{
    float a;

    // Taking input for number
    printf("Enter number = ");
    scanf("%f", &a);

    // Printing Square root of number
    printf("The square root of number is %0.2f\n", sqrt(a));

    return 0;
}