/*
 ============================================================================
 Name        : image-gen.c
 Author      : Filip Nguyen
 Version     :
 Copyright   : Your copyright notice
 Description : This file generates an image in pgm fileformat
 ============================================================================
 */

#include <stdio.h>

int main(int argc, char **argv) {
	int i,j,k;
	puts("P2");
	puts("400 400");
	puts("255");
	for(i=0;i<400;i++)
	{
		for (j=0;j<400;j++)
		{
			k=i*i+j*j;
			k=k&0xff;
			printf("%d ", k);
		}
	}
	return 0;
}
