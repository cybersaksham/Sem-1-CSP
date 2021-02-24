// 4. WAP to find length of string using pointers

#include <stdio.h>

int main()
{
    char str[20];
    int i = 0;

    // Taking input for string
    printf("Enter string = ");
    gets(str);

    // Calculating length of string
    while (*(str + i) != '\0')
    {
        i += 1;
    }

    // Printing length
    printf("The length of string is %d\n", i);

    return 0;
}