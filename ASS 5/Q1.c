// 1. WAP to find product of two matrices.

#include <stdio.h>

int main()
{
    int m, n, p, q, sum = 0;

    // Taking input for size of matrices
    printf("Enter size of 1st matrix: \n");
    scanf("%d%d", &m, &n);
    printf("Enter size of 2nd matrix: \n");
    scanf("%d%d", &p, &q);

    int a[m][n], b[p][q];

    // Checking matrix size validation
    if (m > 0 && n > 0 && p > 0 && q > 0)
    {
        // Checking multiplication validation
        if (n == p)
        {
            printf("matrix multiplication is possible\n");
            int axb[m][q];

            // Taking input for 1st matrix
            printf("Enter 1st matrix\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            // Taking input for 2nd matrix
            printf("Enter 2nd matrix\n");
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }

            // Loop for multiplication
            for (int i = 0; i < m; i++) // Move through rows of matrix A
            {
                for (int j = 0; j < q; j++) //Move through columns of matrix B
                {
                    for (int k = 0; k < n; k++) //Move through columns of matrix A
                    {
                        sum += a[i][k] * b[k][j]; //Multiplying element of A with corresponding element of B
                    }
                    axb[i][j] = sum;
                    sum = 0;
                }
            }

            // Printing result
            printf("mutiplication of matices : \n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < q; j++)
                {
                    printf("%d ", axb[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Column of A should be equal to Row of B\n");
        }
    }
    else
    {
        printf("Cannot enter zero or negative values.\n");
    }

    return 0;
}