#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <string.h>
 #include <fcntl.h>
 #include <sys/wait.h>

int main(int argc, char *argv[]) {
    int fc = fork();

    if (fc == 0){
        
        close(STDOUT_FILENO);
        printf("Hello World");

    }
    else if (fc > 0){
        puts("Parent text");
    }
}

/*

question 7: the child cannot print to the terminal using printf after closing

*/