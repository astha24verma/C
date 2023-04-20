#include <stdio.h>
void main()
{
    int a[50][50], i, j, m, n;
    printf("Enter the order of the matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    if (m == n)
    {
        printf("Upper triangular matrix:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 1; j <= i; ++j)
            {
                printf(" ");
            }
            for (j = 0; j < n; j++)
            {
                if (i > j)
                    printf("\t");
                else
                    printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Not an upper triangular matrix");
    }
}