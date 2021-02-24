// 3. WAP to convert binary to octal & vice-versa

#include <stdio.h>
#include <math.h>

// Function for converting binary to octal
int bin_oct(long long int bin)
{
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0)
    {
        dec += (bin % 10) * pow(2, i);
        i += 1;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0)
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }

    return oct;
}

// Function for converting octal to binary
long long int oct_bin(int oct)
{
    long long int bin = 0, dec = 0, i = 0;

    // converting octal to decimal
    while (oct != 0)
    {
        dec += (oct % 10) * pow(8, i);
        oct /= 10;
        i += 1;
    }
    i = 0;

    // converting decimal to binary
    while (dec != 0)
    {
        bin += (dec % 2) * pow(10, i);
        i += 1;
        dec /= 2;
    }

    return bin;
}

// Main Function
int main()
{
    int query = 0;

    // Taking input for user's choice
    printf("Enter 1 for binary to octal\n");
    printf("Enter 2 for octal to binary\n");
    scanf("%d", &query);

    if (query == 1)
    {
        // Binary to octal
        long long bin;

        printf("Enter binary number = ");
        scanf("%lld", &bin);

        printf("%lld in binary = %d in octal\n", bin, bin_oct(bin));
    }
    else if (query == 2)
    {
        // Octal to binary
        int oct;

        printf("Enter octal number = ");
        scanf("%d", &oct);

        printf("%d in octal = %lld in binary\n", oct, oct_bin(oct));
    }
    else
    {
        printf("%d was not a correct input.\n", query);
    }

    return 0;
}