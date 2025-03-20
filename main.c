/*
	Artillery Shell (ash)
 * Just a random shell I wrote in C, to learn about low level stuff
 * idk if this shell will ever see the light of the day
 *
*/
#include <stdio.h>
#include <stdlib.h>

// Shell loop
void lsh_loop(void) {
	char **line; 
	char **args; 
	int status; 

	do {
		printf("> ");
		line = lsh_read_line();
		args = lsh_split_line(line);
		status = lsh_execute(args);

		free(line);
		free(args);
	} while(status);
}

// Main driver function goes here
int main(int argc, char **argv) {
	// Load config files, if any
	
	// Run command loop
	lsh_loop();

	// Perform any shutdown/cleanup.
	
	return EXIT_SUCCESS;
}
