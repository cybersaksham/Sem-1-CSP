// 4. WAP to calculate factorial of a number

#include <stdio.h>

int main()
{
    int n;
    long long result = 1;

    // Taking input for number
    printf("Enter a number = ");
    scanf("%d", &n);

    // Calculating factorial
    if (n >= 0)
    {
        for (int i = 1; i < n + 1; i++)
        {
            result *= i;
        }
        printf("The value of %d! is %lld\n", n, result);
    }
    else
    {
        printf("The number cannot be negative\n");
    }

    return 0;
}