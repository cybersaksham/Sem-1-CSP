// 3. WAP to calculate simple interest

#include <stdio.h>

int main()
{
    float p, r, t, si;

    // Taking input for P, R, T
    printf("Enter principal amount = ");
    scanf("%f", &p);

    printf("Enter rate = ");
    scanf("%f", &r);

    printf("Enter time = ");
    scanf("%f", &t);

    // Calculating Simple Interest
    si = (p * r * t) / 100;
    printf("The simple interest is %0.2f\n", si);

    return 0;
}