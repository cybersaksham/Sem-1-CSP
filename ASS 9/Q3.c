// 3. WAP to reverse a string using pointers

#include <stdio.h>

int main()
{
    char str[20], *ptr, rev[20];
    int length = 0, j = 0;

    // Taking input for string
    printf("Enter string = ");
    gets(str);

    // Calculating length of string
    while (str[length] != '\0')
    {
        length += 1;
    }

    // Reversing string
    for (int i = length - 1; i >= 0; i--)
    {
        ptr = (str + i);
        rev[j] = *ptr;
        j += 1;
    }
    rev[length] = '\0';

    // Printing reversed string
    printf("The reversed string is : ");
    puts(rev);

    return 0;
}