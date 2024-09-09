#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <string.h>
 #include <fcntl.h>
 #include <sys/wait.h>

int main(int argc, char *argv[]) {

    int fc = fork();

    if (fc == 0){
        puts("Hello");
    }
    else if (fc > 0){
        wait(NULL);
        puts("Goodbye");
    }
}

/***********************
Question 3: I feel like there is a way to do so without wait() but I dont know much about
            how it'd. Maybe you could have both access a empty file, and have the parent check for anything 
            in it and not run until there is something that the child writes into it, but that seems inefficient.
***********************/