// 1. WAP to find sum & average of given N elements in an array.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    float avg;

    // Taking input for size of array
    printf("Enter no of elements in array = ");
    scanf("%d", &n);

    int arr[n];

    // Taking input for element of array
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Iterate over elements of array & storing sum of them
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = (float)sum / n;

    // Printing sum & average
    printf("The sum is %d\n", sum);
    printf("The average is %0.2f\n", avg);

    return 0;
}