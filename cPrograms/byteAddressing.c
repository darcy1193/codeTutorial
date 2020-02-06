//byteAddressing.c
/**
AUTHOR : Daniel Darcy
DESCRIPTION : This program illustrates how byte addressing works.
**/
#include <stdio.h>

int main()
{
	char a = 'a';
	char b = 'b';
	char c = 'c';

	printf("The address of a is %p", &a);
	printf("\nThe address of b is %p", &b);
	printf("\nThe address of c is %p\n", &c);

	return 0;
}
