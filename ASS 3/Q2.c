// 2. WAP to print first n natural nmbers & their sum

#include <stdio.h>

int main()
{
    int n, sum = 0;

    // Taking input for n
    printf("Enter a natural number = ");
    scanf("%d", &n);

    // Printing n natural numbers
    if (n > 0)
    {
        for (int i = 1; i < n + 1; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("\nThe sum is %d", sum);
    }
    else
    {
        printf("Enter a natural number\n");
    }

    return 0;
}