// 2. WAP to print given array in reverse order.

#include <stdio.h>

int main()
{
    int n, temp;

    // Taking input for size of array
    printf("Enter no of elements in array = ");
    scanf(" %d", &n);

    int arr[n];

    // Taking input for elements of array
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d = ", i + 1);
        scanf(" %d", &arr[i]);
    }

    // Reversing the array
    printf("The reversed array is :-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[n - i - 1]);
    }

    return 0;
}