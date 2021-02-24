/*
1. (b) WAP with function –
--> With Arguments & without Return Value
for the sum of digits of a given number.
*/

#include <stdio.h>

// Function --> With Arguments & without Return Value
void sum(int n)
{
    int sum = 0;

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
    int n;

    // Taking number as input
    printf("Enter number = ", n);
    scanf("%d", &n);

    sum(n); // Calling Function

    return 0;
}