#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */

    // int a = atoi(argv[1]);
    // int b = atoi(argv[2]);
    // int sum = a  + b;

    // printf("Sum is %d", sum);

    printf("Number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("Value at %d is %s\n", i, argv[i]);
    }
    return 0;
}
