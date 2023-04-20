#include <stdio.h>
#include <conio.h>
void main()
{
    float a, b;
    printf("\nEnter two different numbers\n");
    scanf("%f%f", &a, &b);
    if (a > b)
    {
        printf("%f is larger", a);
    }
    else
    {
        printf("%f is larger", b);
    }
}
