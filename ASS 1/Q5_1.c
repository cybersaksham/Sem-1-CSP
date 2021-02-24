// 5. (a) WAP to swap two numbers using third variable

#include <stdio.h>

int main()
{
    int a, b, c;

    // Taking input of two numbers
    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    // Swapping numbers
    c = a;
    a = b;
    b = c;

    // Printing swapped numbers
    printf("After swapping!!\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}