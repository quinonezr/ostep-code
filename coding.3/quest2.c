#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <string.h>
 #include <fcntl.h>
 #include <sys/wait.h>

int main(int argc, char *argv[]) {
	 FILE *openfile;
	 openfile = fopen("quest2output", "w");

	int fc = fork();

	 if (fc == 0) {
		fprintf(openfile, "i am a small child");
		}
	else if (fc >0){
		fprintf(openfile, "parnet funcon");
		
	}
	
	return 0;
}
/****************************
Question2: both parent and child seem to be able to access the file.
			every time it is run he parent function writes first, and then the
			child function writes its portion afterwards.


******************************/