// 1. WAP to implement binary search of a sorted array.

#include <stdio.h>

int main()
{
    // Declaring Variables
    int n;
    int mid;    //Middle of our search range
    int lo = 0; // Lower end of our search range
    int hi;     //Higher end of our search range
    int query, index = -1;

    // Taking input for size of array
    printf("Enter no of elements in array = ");
    scanf("%d", &n);

    hi = n - 1; //Initializing higher range

    int arr[n];

    // Taking input for element of array
    printf("Enter Array in increasing order.\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at index %d = ", i);
        scanf("%d", &arr[i]);
    }

    // Taking input for query
    printf("Enter number which you want to find = ");
    scanf("%d", &query);

    // Binary Search
    while (lo <= hi) //Loop we will break it when we find required index
    {
        mid = (lo + hi) / 2; //Initializing middle of search range
        if (arr[mid] == query && arr[mid - 1] != query)
        {
            /*
            If arr[mid] == query
            then mid is required index.
            But if array contains query multiple times then we have to check for
            arr[mid - 1] != query in order to find first occurence of query.
            */
            index = mid;
            break; // Breaking because we found answer
        }
        else if (query > arr[mid])
        {
            /*
            If query > arr[mid]
            then answer would be in right half.
            So we initialize lo as mid + 1
            */
            lo = mid + 1;
        }
        else
        {
            /*
            If query < arr[mid] or query is multiple times
            then answer would be in left half.
            So we initialize hi as mid - 1
            */
            hi = mid - 1;
        }
    }

    // Printing answer
    if (index == -1)
    {
        printf("%d not found anywhere\n", query);
    }
    else
    {
        printf("%d found at index no %d\n", query, index);
    }

    return 0;
}