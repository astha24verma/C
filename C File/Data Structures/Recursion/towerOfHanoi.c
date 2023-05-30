#include <stdio.h>
void toh(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("%c -> %c \n", A, C);
    }
    else
    {
        toh(n - 1, A, C, B);
        toh(1, A, B, C);
        // printf("%c -> %c \n", A, C);
        toh(n - 1, B, A, C);
    }
}

void main()
{
    int n = 5;
    toh(n, 'A', 'B', 'C');
}
