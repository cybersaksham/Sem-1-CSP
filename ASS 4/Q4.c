// 4. WAP to print array by elliminating duplicate numbers.

#include <stdio.h>

int main()
{
    int n;

    // Taking input for size of array
    printf("Enter no of elements in array = ");
    scanf(" %d", &n);

    int temp = n; // This is temporary size of arr which decreases after finding duplicate
    int arr[n];

    // Taking input for elements of array
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d = ", i + 1);
        scanf(" %d", &arr[i]);
    }

    // Elliminating duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < temp; j++)
        {
            if (arr[i] == arr[j]) // If arr [i] is equal to any number ahead it (arr [j]) then start a for loop j to temporary size
            {
                for (int k = j; k < temp; k++)
                {
                    arr[k] = arr[k + 1]; // This is deleting that duplicate (arr [j]) & moving every element to index no less than 1
                }
                j -= 1;    // If j + 1 element is also duplicate then by doing j-=1 we can check that also
                temp -= 1; // Reducing temporary size by 1 because 1 duplicate was found
                continue;
            }
            else
            {
                continue;
            }
        }
    }

    // Printing array of final temporary size
    printf("The new array is :-\n");
    for (int i = 0; i < temp; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}