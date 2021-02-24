// 2. WAP to check a given string is palindrome or not without using library functions.

#include <stdio.h>

int main()
{
    char str[20];
    int length = 0, flag = 0;

    // Taking input for string
    printf("Enter string = ");
    gets(str);

    // Calculating Length
    while (str[length] != '\0')
    {
        length += 1;
    }

    // Checking for palindrome
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    // Printing result
    if (flag == 0)
    {
        printf("%s is palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}