// 5. WAP to rewrite a given string in alphabatical order according to ascii values without using library functions.

#include <stdio.h>

int main()
{
    char str[20];
    int length = 0, chars[20], counter, j;

    // Taking input for string
    printf("Enter string = ");
    gets(str);

    // Calculating Length
    while (str[length] != '\0')
    {
        length += 1;
    }

    // Storing ascii values of all characters present in str
    for (int i = 0; i < length; i++)
    {
        chars[i] = (int)str[i];
    }

    // Implementing insertion sort for ascii values
    for (int i = 1; i < length; i++)
    {
        counter = chars[i];
        j = i - 1;
        // Inserting smallest element before i
        while (j >= 0 && chars[j] > counter)
        {
            chars[j + 1] = chars[j];
            j -= 1;
        }
        chars[j + 1] = counter;
    }

    // Printing sorted string
    for (int i = 0; i < length; i++)
    {
        printf("%c", chars[i]);
    }

    return 0;
}