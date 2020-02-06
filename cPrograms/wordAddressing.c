//wordAddressing.c
/**
AUTHOR : Daniel Darcy
DESCRIPTION : This program illustrates how wordAddressing works.
**/
#include <stdio.h>

int main(){

	int a = 1;
	int b = 2;
	int c = 3;

	printf("The address of a is %p", &a);
	printf("\nThe address of b is %p", &b);
	printf("\nThe address of c is %p\n", &c);

	return 0;
}
