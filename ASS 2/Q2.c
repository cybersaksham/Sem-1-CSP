// 2. WAP to check whether a number is even or odd

#include <stdio.h>

int main()
{
    int a;

    // Taking input for number
    printf("Enter a number = ");
    scanf("%d", &a);

    // Checking even or odd
    if (a % 2 == 0) // Divisible by 2 --> even
    {
        printf("%d is even\n", a);
    }
    else // Not divisible by 2 --> odd
    {
        printf("%d is odd\n", a);
    }

    return 0;
}