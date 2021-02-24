/*
1. (c) WAP with function –
--> With Arguments & with Return Value
for the sum of digits of a given number.
*/

#include <stdio.h>

// Function --> With Arguments & with Return Value
int sum(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum += (n % 10);
        n = n / 10;
    }

    return sum;
}

// Main Function
int main()
{
    int n;

    // Taking number as input
    printf("Enter number = ", n);
    scanf("%d", &n);

    // Calling function
    printf("The sum of digits is %d\n", sum(n));

    return 0;
}