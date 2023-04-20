#include <stdio.h>
#include <conio.h>
void main()
{
    int s1, s2, s3;
    printf("Enter three sides of a triangle\n");
    scanf("%d%d%d", &s1, &s2, &s3);
    if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s3 + s1 > s2))
    {
        printf("\nTriangle is valid");
    }
    else
    {
        printf("\nTriangle is not valid");
    }
}
