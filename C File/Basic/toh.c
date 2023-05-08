#include <stdio.h>

// Tower of Hanoi
void toh(int n, char src, char aux, char dest)
{
    if (n == 1)
    {
        printf("move disk %d from rod %c to rod %c \n", n, src, dest);
        return;
    }

    toh(n - 1, src, dest, aux);
    printf("move disk %d from rod %c to rod %c \n", n, src, dest);
    toh(n - 1, aux, src, dest);
}

void main()
{
    int n = 3;
    toh(n, 'A', 'B', 'C');
}
