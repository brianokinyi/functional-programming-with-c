#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    // Store child process
    pid_t parent;
    pid_t child;

    parent = getpid();
    child = fork();

    // if return value of fork == 0 then we are in the child process
    // return > 0 we are in the parent process
    // return < 0 fork() was not successfull 
    if(child>0){
        printf("I am the parent process\n");
    }else if(child<0){
        printf("Fork system call was unsuccessfull\n");
    }
    else{
        printf("I am the child process\n");
    }
}