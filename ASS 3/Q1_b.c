// 1. (b) WAP to evaluate cube of a number

#include <stdio.h>

int main()
{
    float a;

    // Taking input for number
    printf("Enter number = ");
    scanf("%f", &a);

    // Printing cube of number
    printf("The cube of number is %0.2f\n", a * a * a);

    return 0;
}