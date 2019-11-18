/**
printV.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows how to print different data typed variables.
There is also a small portion at the bottom which shows how floats and doubles
precision is 7 and 16 respectively.
**/
#include <stdio.h>

int main( int argc, const char* argv[] ){		//Printing different types

	int a = -1;
	float b = 1.12345678901234567890;
	double c = 1.12345678901234567890;
	char d = 'd';
	char* e = "hello";
	unsigned int f = 24;

	//Print examples
	printf("signed int = %d", a);				//d = signed int
	printf("\nfloat = %.10f", b);					//f = float
	printf("\ndouble = %.15f", c);				//f = double
	printf("\nchar = %c", d);							//c = char
	printf("\nchar* = %s", e);						//s = char*
	printf("\nunsigned int = %u", f);			//u = unsigned int
	printf("\noctal = %o", f);				//d = signed int
	printf("\nhex = %x", f);				//d = signed int

	//Precision examples
	printf("\nfloat precision test = %.10f", b);					//f = float
	printf("\ndouble precision test = %.17f\n\n", c);				//f = double
}
