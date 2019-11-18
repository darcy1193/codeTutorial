/**
IntZeroDivision.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows what happened when an unsigned integer is divided by 0,
when 0 is divided by an unsignedinteger, when 0 is divided by 0.
**/
#include <stdio.h>

int main( int argc, const char* argv[] ){
	unsigned int result1 = 0/0, result2 = 10/0, result3 = 0/10;

	printf("zero/zero = %d", result1);
	printf("\nten/zero = %d", result2);
	printf("\nzero/ten = %d\n\n", result3);

}
