#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <string.h>
 #include <fcntl.h>
 #include <sys/wait.h>

int main(int argc, char *argv[]) {

    int fc = fork();

    if (fc == 0){
        execl("/bin/ls","/bin/ls", NULL);
    }
    else if (fc > 0){
        puts("parnet");
    }
}

/*
Question 4 : I think the reason we have so many calls is that they each fit slightly different use cases. 
I looked up the various types of exec and found that they are grouped in by the characters
that follow exec, like how if theres a v in it it takes the arguments for the process in the form
of an array.
*/