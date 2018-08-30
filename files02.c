#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("files/testFile.txt", "r");

    if(fp == NULL){
        perror("Error! Could not open file");
        return(-1);
    }

    char c = fgetc(fp);
    while(c !=EOF){
        printf("%c", c);
        c = fgetc(fp);
    }

    fclose(fp);
    return 0;
}