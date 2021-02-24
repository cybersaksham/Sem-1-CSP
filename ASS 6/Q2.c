// 2. WAP to implement bubble sort.

#include <stdio.h>

int main()
{
    // Declaring Variables
    int n, temp, j;

    // Taking input for size of array
    printf("Enter no of elements in array = ");
    scanf("%d", &n);

    int arr[n];

    // Taking input for element of array
    printf("Enter Array Elements.\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at index %d = ", i);
        scanf("%d", &arr[i]);
    }

    // Loop for iterating over elemnts of array
    for (int i = 0; i < n - 1; i++)
    {
        j = i;
        // Loop for iterating over 2 - 2 element bubbles
        while (j != -1)
        {
            /*
            If we found (j + 1)th number smaller than (j)th element
            then swap them both.
            And reduce bubble index by 1 for checking till index 0
            */
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

            /*
            If above condition is false
            then no need to swap so break loop for this iteration.
            */
            else
            {
                break;
            }
            j -= 1;
        }
    }

    // Printing sorted array
    printf("The sorted array in increasing order is :-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}