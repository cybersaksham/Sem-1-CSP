// 5. (b) WAP to swap two numbers without using third variable

#include <stdio.h>

int main()
{
    int a, b;

    // Taking input of two numbers
    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    // Swapping numbers
    a = a + b;
    b = a - b;
    a = a - b;

    // Printing swapped numbers
    printf("After swapping!!\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}