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
    printf("\n");

    // 
    printf("Read file line by line\n");

    char line[128];

    while(fgets(line, sizeof line, fp) != NULL){
        fputs(line, stdout);
    }

    fclose(fp);
    return 0;
}