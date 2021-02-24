// 2. WAP with recursive functions for generation of fibonacci series.

#include <stdio.h>

// Recursive Function for fibonacci calculation
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        // If n == 1 --> return 0
        // If n == 2 --> return 1
        return n - 1;
    }
    else
    {
        // Else return sum of previous two fibonacci's
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

// Main Function
int main()
{
    int n;

    // Taking input for elements in fibonacci series
    printf("Enter no of elements in fibonacci series = ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The required fibonacci series is :\n");
        // Storing values of fibonacci series 1 to n in array & printing them
        for (int i = 0; i < n; i++)
        {
            printf("%d ", fibonacci(i + 1));
        }
    }
    else
    {
        printf("No of elements cannot be %d\n", n);
    }

    return 0;
}