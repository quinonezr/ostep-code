#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <string.h>
 #include <fcntl.h>
 #include <sys/wait.h>

int main(int argc, char *argv[]) {
    int status;
    int fc = fork();

    if (fc == 0){
        puts("I run first");

    }
    else if (fc > 0){
        int waitresult = waitpid(fc, &status, WUNTRACED);
        printf("%d \n", waitresult);
        printf("%d \n", fc);
    }
}

/*
Question 6: waitpid could be useful for when a specific child process needs to finish before the parent process.

*/