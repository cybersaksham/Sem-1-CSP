// 2. WAP to copy one array into another using pointers

#include <stdio.h>

int main()
{
    int n;

    // Taking input for size of array
    printf("Enter size of array = ");
    scanf("%d", &n);

    // Declaring array & pointer to it
    int arr1[n];
    int *arr2 = arr1;

    // Taking input for elements of array
    for (int i = 0; i < n; i++)
    {
        printf("Enter index %d = ", i);
        scanf("%d", &arr1[i]);
    }

    // Printing original array
    printf("The original array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    // Printing copied array
    printf("\nThe copied array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}