// 3. WAP to print all the prime numbers from 1 to 100

#include <stdio.h>

int main()
{
    int check = 0;

    printf("The prime numbers from 1 to 100 are :-\n");
    for (int i = 2; i < 101; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) // If i is divisible by any number less than it (counting from 2) then it would
                            // be composite
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            printf("%d ", i);
        }
        check = 0;
    }

    return 0;
}