#include <stdio.h>

int main()
{
    FILE *pfile = NULL;
    char *filename = "myfile.txt";

    if(!fopen_s(&pfile, filename, "w"))
        printf_s("Failed to open %s.\n", filename);
    return 0;
}