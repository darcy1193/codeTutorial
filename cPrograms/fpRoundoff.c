/**
fpRoundoff.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows how roundoff can effect values in C.
.1 is added to .2 and the result is not 100% precise.
**/
#include <stdio.h>

int main( int argc, const char* argv[] ){
	float a = 0.1, b = 0.2, c;
	c = a + b;

	float d = 0.3;
	if(d != 0.3)
		printf("d != .0.3\n\n");
	printf(".1 + .2 = %.10f\n\n", c);		//displays 6 accurate digits of precision
	printf("d = %.10f\n\n", d);		//displays 6 accurate digits of precision
}
