// Q-5 Write a program to sort Even and Odd numbers present in
// an array.
#include<stdio.h>
int main()
{
    int a, b, arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &a); // input size of array from user
    printf("Enter the array numbers: ");
    for (int b = 0; b < a; b++)
    {
        scanf("%d", &arr[b]); // input elements of array
    }
    printf("Even numbers in the array are: ");
    for (int b = 0; b < a; b++)
    {
        if (arr[b] % 2 == 0)
        {
            printf(" %d ", arr[b]); // print all even numbers
        }
    }

    printf("\nOdd numbers in the array are: ");
    for (int b = 0; b < a; b++)
    {
        if (arr[b] % 2 != 0)
        {
            printf(" %d ", arr[b]); // print all odd numbers
        }
    }
    return 0;
}