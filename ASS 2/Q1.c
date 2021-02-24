// 1. WAP to find whether a given year is leap year or not

#include <stdio.h>

int main()
{
    int year;

    // Taking input for year
    printf("Enter an year = ");
    scanf("%d", &year);

    // Checking leap year or not
    if (year % 400 == 0) // If divisible by 400 then surely leap year
    {
        printf("%d is a leap year\n", year);
    }
    else if (year % 100 == 0) // Divisible by 100 but not by 400 then not leap year
    {
        printf("%d is not a leap year\n", year);
    }
    else if (year % 4 == 0) // Divisible by 4 but not by 100 then leap year
    {
        printf("%d is a leap year\n", year);
    }
    else // Any other condition would not give leap year
    {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}