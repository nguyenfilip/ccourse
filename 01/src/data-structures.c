/*
 ============================================================================
 Name        : data-structures.c
 Author      : Filip Nguyen
 Version     :
 Copyright   : Your copyright notice
 Description : Working with data structures
 ============================================================================
 */

#include <stdio.h>

int main(int argc, char **argv) {
	//sizeof is constanant and is computed at compile time
	printf("char:     %ld\n", sizeof(char));
	printf("short:    %ld\n", sizeof(short));
	printf("int:      %ld\n", sizeof(int));
	printf("long:     %ld\n", sizeof(long));
	printf("float:    %ld\n", sizeof(float));
	printf("double:   %ld\n", sizeof(double));

	//character code in octal
	puts("\n\nA character:");
	putchar('\100');
	putchar('\n');
	return 0;
}
