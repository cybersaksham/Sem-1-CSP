// 5. WAP to find biggest element in array.

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

    // Finding biggest number
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] >= arr[j])
            {
                temp = 0; // If arr [i] is greater than all numbers ahead it then temp become 0
                continue;
            }
            else
            {
                temp = 1; // If arr [i] is smaller than atleast one number then temp become 1 & break for loop
                break;
            }
        }

        if (temp == 0) // If temp is 0 then print that number & break the program
        {
            printf("The biggest number is %d\n", arr[i]);
            break;
        }
    }

    return 0;
}