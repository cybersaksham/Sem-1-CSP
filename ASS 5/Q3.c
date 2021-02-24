// 3. WAP to check that a given matrix is symmetric or not.

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

        // Loop for checking symmetric
        for (int j = 0; j < m; j++) //Move through columns of matrix
        {
            for (int i = 0; i < m; i++) //Move through rows of matrix
            {
                // If symmetric elements are not equal
                // then check = 1 and break
                if (a[i][j] != a[j][i])
                {
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
                // For check = 1 break loop coz matrix would not symmetric
                break;
            }
            else
            {
                continue;
            }
        }

        // Printing results
        if (check == 1)
        {
            printf("Matrix is not symmetric\n");
        }
        else
        {
            printf("Matrix is symmetric.\n");
        }
    }
    else
    {
        printf("Cannot enter zero or negative values.\n");
    }

    return 0;
}