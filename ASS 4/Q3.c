// 3. WAP to delete an element from an array.

#include <stdio.h>

int main()
{
    int n, i_del;

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

    // Taking position at which we want to delete
    printf("Enter the number at which you want to delete = ");
    scanf(" %d", &i_del);

    // Deleting element
    if (i_del > n || i_del < 1)
    {
        printf("Deletion is not possible for this index\n");
    }
    else
    {
        for (int i = i_del - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1]; //Starting from position to delete we have stored numbers at index
                                 //  1 less than their own
        }

        printf("The new array is :-\n");
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}