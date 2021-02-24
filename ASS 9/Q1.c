// 1. WAP to swap two numbers using pointers

#include <stdio.h>

int main()
{
    int a, b, temp;
    int *p = &a, *q = &b;

    // Taking input for numbers
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);

    // Printing before swapping
    printf("Before Swapping!!!\n");
    printf("\ta = %d\n", a);
    printf("\tb = %d\n", b);

    // Swapping numbers
    temp = *p;
    *p = *q;
    *q = temp;

    // Printing after swapping
    printf("After Swapping!!!\n");
    printf("\ta = %d\n", a);
    printf("\tb = %d\n", b);

    return 0;
}