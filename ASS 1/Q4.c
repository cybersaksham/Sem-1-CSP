// 4. WAP to convert fahrenhiet to celsius

#include <stdio.h>

int main()
{
    float f, c;

    // Taking input in Fahrenhiet
    printf("Enter temperature in Fahrenhiet = ");
    scanf("%f", &f);

    // Calculating Tempereture in celsius
    c = (f - 32) * 5 / 9;
    printf("The temperature in Celsius = %0.2f", c);

    return 0;
}