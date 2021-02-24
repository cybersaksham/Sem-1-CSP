// 3. WAP to delete n characters form a particular position in a given string without using library functions.

#include <stdio.h>

int main()
{
    char str[20];
    int length = 0, n, index;

    // Taking input for string
    printf("Enter string = ");
    gets(str);

    // Calculating Length
    while (str[length] != '\0')
    {
        length += 1;
    }

    // Taking input for particular index
    printf("Enter index from which you want to delete = ");
    scanf(" %d", &index);

    // Taking input for n
    printf("Enter no of characters you want to delete = ");
    scanf(" %d", &n);

    // Checking deletion
    if ((index >= 0 && index < length) && n >= 1)
    {
        // Deleting elements
        if ((index + n) >= length)
        {
            // If elements to be deleted cross length
            // Then simply put '\0' at index position
            str[index] = '\0';
        }
        else
        {
            // If elements to be deleted can't cross length
            // Then start from index & store values starting from index + n
            for (int i = index; i < length - n; i++)
            {
                str[i] = str[i + n];
            }
            // Put '\0' at end of string
            str[length - n] = '\0';
        }

        // Printing final string
        printf("The new string is = %s", str);
    }
    else
    {
        printf("Values entered are invalid.\n");
    }

    return 0;
}