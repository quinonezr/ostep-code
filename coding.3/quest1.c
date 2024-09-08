#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <string.h>
 #include <fcntl.h>
 #include <sys/wait.h>

int main(int argc, char *argv[]) {
	
	int x = 100;
	int fc = fork();
	if (fc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);}
	else if (fc == 0) {
		x = 50;
		}
	else if (fc >0){
		x = 30;
	}
	printf("%d \n",x);
	return 0;
}
/*********************************************
   Your name:Ruben Quinonez
   Question 1: Both Child and parent functions have x set to the initial value of 100.
				Both functions have their own x variable and edits in one do not affect the other.

*********************************************/
