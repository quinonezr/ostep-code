#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <string.h>
 #include <fcntl.h>
 #include <sys/wait.h>

int main(int argc, char *argv[]) {

    int fc = fork();

    if (fc == 0){
        //wait(NULL);
       // int parent = getppid();
        puts("I run first");
        //printf("%d \n", parent );
    }
    else if (fc > 0){
        int waitresult = wait(NULL);
        printf("%d \n", waitresult);
        printf("%d \n", fc);
    }
}

/*
Question 5: The wait function returns the process ID of the child that ran before the parent.
            If wait is used in the child function it then returns the parent's process ID instead
            and waits for the parent function to finish.


*/