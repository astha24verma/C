#include <stdio.h>
int main()
{
    int m, n, p, q, a[100][100], b[100][100], sum[100][100], prod[100][100], i, j;
    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &p, &q);

    while (p != n)
    {
        printf("\nCannot perform multiplication.\n");
        return 0;
    }

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < p; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < q; ++j)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // multiplying two matrices
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < q; ++j)
        {
            for (int k = 0; k < q; ++k)
            {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // printing the result for multiplication
    printf("\nMultiplication of two matrices: \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < q; ++j)
        {
            printf("%d  ", prod[i][j]);
        }
        printf("\n");
    }

    if (m != p || n != q)
    {
        printf("\nCannot perform addition.\n");
        return 0;
    }

    // adding two matrices
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // printing the result for sum
    printf("\nSum of two matrices: \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("%d   ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
