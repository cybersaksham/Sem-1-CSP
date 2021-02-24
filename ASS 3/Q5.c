// 5. WAP to print fibonacci sequence of first n nmubers

#include <stdio.h>

int main()
{
    int n, result = 1;
    int a = 0, b = 1;

    // Taking input for number
    printf("Enter a number = ");
    scanf("%d", &n);

    // Calculating fibonacci
    if (n == 1)
    {
        printf("0\n"); // First element is zero
    }
    else if (n > 1)
    {
        printf("0 1 "); // For printing more than 1 number
        for (int i = 2; i < n; i++)
        {
            b = b + a;        // For n = 3 --> b = 1 + 0 = 1 --> Third element
            a = b - a;        // a = 1 - 0 = 1 --> Second element
            printf("%d ", b); // Printing third element
        }
    }
    else
    {
        printf("The number can be greater than zero only.\n");
    }

    return 0;
}