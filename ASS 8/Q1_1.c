/*
1. (a) WAP with function –
--> Without Arguments & without Return Value
for the sum of digits of a given number.
*/

#include <stdio.h>

// Function --> Without Arguments & without Return Value
void sum()
{
    int sum = 0, n;

    // Taking number as input
    printf("Enter number = ", n);
    scanf("%d", &n);

    while (n != 0)
    {
        sum += (n % 10);
        n = n / 10;
    }

    printf("The sum of digits is %d\n", sum);
}

// Main Function
int main()
{
    sum();

    return 0;
}