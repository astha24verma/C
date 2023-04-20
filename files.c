#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr = NULL;
    
    // Write to file
    // char str[80] = "Hello World! How you doing? And this is interseting.";
    // fptr = fopen("textFile.txt", "w"); // Open file in write mode -> "w"
    // if (fptr == NULL)
    // {
    //     printf("Error opening file");
    //     return 1;
    // }
    // // fprintf(fptr, "%s", str);
    // fputs(str, fptr);

    // Read from file
    char str[80];
    fptr = fopen("textFile.txt", "r"); // Open file in read mode -> "r"

    if (fptr == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    // fscanf(fptr, "%[^\n]s", str);
    fgets(str, 80, fptr);
    printf("Content from the file: \n%s", str);

    // Close file
    fclose(fptr);

    return 0;
}
