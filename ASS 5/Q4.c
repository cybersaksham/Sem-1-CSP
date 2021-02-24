// 4. WAP to find sum of diagonal element of a matrix.

#include <stdio.h>

int main()
{
    int m, sum = 0;

    // Taking input for size of matrix
    printf("enter size of Square Matrix: \n");
    scanf("%d", &m);

    int a[m][m];

    // Ckecking size validation
    if (m > 0)
    {
        // Taking input for matrix
        printf("Enter Matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        // Moving through diagonal
        for (int i = 0; i < m; i++)
        {
            // Storing sum of diagonal elements
            sum += a[i][i];
        }

        printf("The sum of diagonal elements is %d\n", sum);
    }
    else
    {
        printf("Cannot enter zero or negative values.\n");
    }

    return 0;
}