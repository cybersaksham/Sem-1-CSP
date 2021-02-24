// 4. WAP to implement insertion sort.

#include <stdio.h>

int main()
{
    // Declaring Variables
    int n, counter, j;

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
    for (int i = 1; i < n; i++)
    {
        counter = arr[i];
        j = i - 1;
        // Inserting smallest element before i
        while (j >= 0 && arr[j] > counter)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = counter;
    }

    // Printing sorted array
    printf("The sorted array in increasing order is :-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}