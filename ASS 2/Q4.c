// 4. WAP to find the highest among three numbers and print the same.

#include <stdio.h>

int main()
{
    int a, b, c;

    // Taking input for three numbers
    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    printf("Enter c = ");
    scanf("%d", &c);

    // Checking for greatest numbers
    if (a >= b)
    {
        if (a >= c) // (a > b) & (a > c) --> a
        {
            printf("The greatest is %d\n", a);
        }
        else // (a > b) & (a < c) --> c
        {
            printf("The greatest is %d\n", c);
        }
    }
    else if (b >= c) // (a < b) & (b > c) --> b
    {
        printf("The greatest is %d\n", b);
    }
    else // (a < b) & (b < c) --> c
    {
        printf("The greatest is %d\n", c);
    }

    return 0;
}