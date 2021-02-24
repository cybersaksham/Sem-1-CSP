// 4. WAP to check whether a number can be expressed as the sum of two prime numbers.

#include <stdio.h>

// Function for checking prime numbers
int check_prime(int n)
{
    int flag = 0;
    // flag = 0 represent prime number
    // flag = 1 represent others

    if (n == 1)
    {
        // 1 is neither prime nor composite
        flag = 1;
    }
    else
    {
        // Loop for iterating over numbers from 2 to half of n
        for (int i = 2; i <= (n / 2); i++)
        {
            // If n is divisible by any of them
            // Then flag = 1 & break
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    return flag;
}

// Function for check question requirement
int check_sum(int n)
{
    int term1, term2, count = 0;

    // Loop for iterating over numbers from 2 to half of n
    for (int i = 2; i <= (n / 2); i++)
    {
        term1 = i;
        term2 = n - i;

        // If both terms are prime then increase count & print terms
        if (check_prime(term1) == 0 && check_prime(term2) == 0)
        {
            count += 1;
            printf("Case-%d) %d = %d + %d\n", count, n, term1, term2);
        }
    }

    if (count == 0)
    {
        // If no such terms found
        printf("No such case found\n");
    }
}

// Main Function
int main()
{
    int n;

    // Taking input for number
    printf("Enter the number = ");
    scanf("%d", &n);

    // Calling function
    check_sum(n);

    return 0;
}