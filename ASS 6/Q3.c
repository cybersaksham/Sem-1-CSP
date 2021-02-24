// 3. WAP to implement selection sort.

#include <stdio.h>

int main()
{
    // Declaring Variables
    int n, counter, temp;

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
        counter = i;
        // Finding smallest number ahead of counter position
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[counter])
            {
                counter = j;
            }
        }

        // Swapping numbers positioned at counter and initial i
        temp = arr[i];
        arr[i] = arr[counter];
        arr[counter] = temp;
    }

    // Printing sorted array
    printf("The sorted array in increasing order is :-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}