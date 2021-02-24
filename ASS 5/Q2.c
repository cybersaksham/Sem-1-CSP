// 2. WAP to check that a given matrix is upper triangular or not.

#include <stdio.h>

int main()
{
    int m, check = 0;

    // Taking input for size of matrix
    printf("Enter size of Square Matrix: \n");
    scanf("%d", &m);

    int a[m][m];

    // Checking size validation
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

        // Loop for checking upper-triangular or not
        for (int j = 0; j < m; j++) //Move through columns of matrix
        {
            for (int i = j + 1; i < m; i++) //Move from diagonal element to last element
            {
                if (a[i][j] != 0)
                {
                    // If a single element is found to be non zero
                    // then check = 1 and break
                    check = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }

            if (check == 1)
            {
                // For check = 1 break loop coz matrix would not upper triangular
                break;
            }
            else
            {
                continue;
            }
        }

        // Printing result
        if (check == 1)
        {
            printf("Matrix is not upper triangular\n");
        }
        else
        {
            printf("Matrix is upper triangular.\n");
        }
    }
    else
    {
        printf("Cannot enter zero or negative values.\n");
    }

    return 0;
}