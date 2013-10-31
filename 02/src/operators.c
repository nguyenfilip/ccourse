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
	int a = 5;
	int b = 2;
	int c = a/b;
	printf("%d\n", c);
	printf("%d\n", a/b);
	double d = (double)a/b;
	printf("%f\n", d);

	//0 is false, everything else is true
    //null is false

	printf ("%d\n", 1&&2);
	printf ("%d\n", 0&&1);

	//bitwise operators
	a = 1;//00000001
	b = 2;//00000010
	printf("%d\n", a&b);
	printf("%d\n", a|b);
	printf("%d\n", a^b);//XOR
	printf("%x\n", ~0);//bitwise negation, output hexadecimal

	return 0;


}
