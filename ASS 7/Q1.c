// 1. WAP to reverse a given string without using library functions.

#include <stdio.h>

int main()
{
    char str[20], rev[20];
    int length = 0;

    // Taking input for string
    printf("Enter string = ");
    gets(str);

    // Calculating Length
    while (str[length] != '\0')
    {
        length += 1;
    }

    // Storing reversed string
    for (int i = 0; i < length; i++)
    {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0'; //Storing null character to show end of string

    // Printing Reversed string
    printf("The reversed string is is = ");
    puts(rev);

    return 0;
}