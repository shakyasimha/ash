/*
	Artillery Shell (ash)
 * Just a random shell I wrote in C, to learn about low level stuff
 * idk if this shell will ever see the light of the day
 *
*/
#include <stdio.h>

// Shell loop
void lsh_loop(void) {
	printf("Hello World\n");
}

// Main driver function goes here
int main(int argc, char **argv) {
	// Load config files, if any
	
	// Run command loop
	lsh_loop();

	// Perform any shutdown/cleanup.
	
	return EXIT_SUCCESS;
}
