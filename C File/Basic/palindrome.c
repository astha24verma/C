#include <stdio.h>
#include <string.h>

// to check if a string str is palindrome

void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l] != str[h])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
        l++;
        h--;
    }
    printf("%s is a palindrome\n", str);
}

int main()
{
    char str[20];
    printf("Enter a string:");
    scanf("%s", str);
    isPalindrome(str);
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}
