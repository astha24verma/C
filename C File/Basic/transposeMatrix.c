#include <stdio.h>
int main()
{

    int r, c, a[100][100], tp[100][100], i, j;
    printf("Enter rows and column for the matrix: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix: \n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            tp[i][j] = a[j][i];
        }
    }

    printf("\nTranspose of Matrix: \n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", tp[i][j]);
        }
        printf("\n");
    }
}