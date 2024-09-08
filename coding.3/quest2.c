#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <string.h>
 #include <fcntl.h>
 #include <sys/wait.h>

int main(int argc, char *argv[]) {
	open("quest2.c", O_WRONLY);

	int fc = fork();

	if (fc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);}
	else if (fc == 0) {
		
		}
	else if (fc >0){
		
	}
	return 0;
}
