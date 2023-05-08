#include <stdio.h>

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}
void main()
{
    int n, i;
    printf("Enter terms:\n");
    scanf("%d", &n);
    printf("Fibonacci series of %d numbers is: ", n);
     for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
}
