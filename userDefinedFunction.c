#include <stdio.h>

int calculateSum(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

int main()
{
    int sum = 0;
    int n1, n2, n3;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    sum = calculateSum(n1, n2, n3);
    printf("Sum of 3 numbers is %d", sum);
    return 0;
}
