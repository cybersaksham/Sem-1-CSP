// 3. WAP to calculate roots of quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, D, ip, rp;
    printf("The equation is ax^2 +bx + c\n");

    // Taking input for co-efficients
    printf("Enter a = ");
    scanf("%f", &a);

    printf("Enter b = ");
    scanf("%f", &b);

    printf("Enter c = ");
    scanf("%f", &c);

    // Calculating common things in all cases
    rp = (-1 * b) / (2 * a);
    D = (b * b) - (4 * a * c);

    // Calculating roots according to nature of Discriminant
    if (D > 0)
    {
        ip = (sqrt(D)) / (2 * a); // This is not imaginary part here
        x1 = rp + ip;
        x2 = rp - ip;
        printf("\nThe roots of (%0.2f)x^2 + (%0.2f)x + (%0.2f) are REAL & DISTINCT\n", a, b, c);
        printf("x1 = %0.2f\n", x1);
        printf("x2 = %0.2f\n\n", x2);
    }
    else if (D == 0)
    {
        x1 = rp;
        printf("\nThe roots of (%0.2f)x^2 + (%0.2f)x + (%0.2f) are REAL & EQUAL\n", a, b, c);
        printf("x1 = %0.2f\n", x1);
        printf("x2 = %0.2f\n\n", x1);
    }
    else
    {
        ip = ((sqrt(-1 * D)) / (2 * a)); // This is imaginary part here
        printf("\nThe roots of (%0.2f)x^2 + (%0.2f)x + (%0.2f) are IMAGINARY\n", a, b, c);
        printf("x1 = %0.2f + (%0.2f)i\n", rp, ip);
        printf("x2 = %0.2f - (%0.2f)i\n\n", rp, ip);
    }

    return 0;
}