// 5. WAP to find G.C.D using recursion.

#include <stdio.h>

// Function for finding GCD
int gcd(int n, int m, int temp)
{
    // If temp divides m & n both
    // Then return temp
    if ((m % temp == 0) && (n % temp == 0))
    {
        return temp;
    }
    // Else check for temp - 1
    else
    {
        gcd(n, m, temp - 1);
    }
}

int main()
{
    int p, q;

    // Taking input for numbers
    printf("Enter number 1 = ");
    scanf("%d", &p);
    printf("Enter number 2 = ");
    scanf("%d", &q);

    // Conditions for sending smaller no as temp in function
    if (p <= q)
    {
        printf("G.C.D(%d, %d) = %d\n", p, q, gcd(p, q, p));
    }
    else
    {
        printf("G.C.D(%d, %d) = %d\n", p, q, gcd(q, p, q));
    }

    return 0;
}