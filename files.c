#include <stdio.h>

int main()
{
    // Create a file typed pointer
    FILE *file_pointer;
    // Open file for writing
    file_pointer = fopen("files/testFile.txt", "w");

    fprintf(file_pointer, "This will write to a file");

    return 0;
}