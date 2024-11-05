#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pid_t pid;
    pid = fork();
    if(pid<0){
        printf("Fork Failed!\n");
        exit(1);
    }else if (pid==0){
        printf("This is the child process. \n");
        printf("Child Process ID: %d\n", getpid());
        printf("Child Process ID: %d\n", getpid());
    } else {
        printf("This is the parent process. \n");
        printf("Parent Process ID: %d\n", getpid());
        printf("Child Process ID: %d\n", pid);
    }
    return 0;
}