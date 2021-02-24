// 4. WAP to count occurence of a alphabate in a given string without using library functions.

#include <stdio.h>

int main()
{
    char str[20], chars[20];
    int length = 0, flag, count, j, k = 0;

    // Taking input for string
    printf("Enter string = ");
    gets(str);

    // Calculating Length
    while (str[length] != '\0')
    {
        length += 1;
    }

    // Deleting extra numbers
    for (int i = 0; i < length; i++)
    {
        flag = 0;
        j = 0;
        // Loop for checking if an element is stored in chars[] already or not
        for (j; j < i; j++)
        {
            if (chars[j] == str[i])
            {
                // If stored than flag = 1 & break
                flag = 1;
                break;
            }
        }

        // If flag = 0 i.e. character is not stored in chars[] yet
        // Then store it
        if (flag == 0)
        {
            chars[k] = str[i];
            k += 1;
        }
    }
    chars[k] = '\0'; //Ending chars[] string

    // Counting occurence
    printf("Occurences of all characters are as follows :-\n");
    for (int p = 0; p < k; p++)
    {
        count = 0;
        for (int i = 0; i < length; i++)
        {
            if (chars[p] == str[i])
            {
                count += 1;
            }
        }
        printf("%c --> %d times\n", chars[p], count, str);
    }

    return 0;
}