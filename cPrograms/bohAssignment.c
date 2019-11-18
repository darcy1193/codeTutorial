/**
bohAssignment.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows how to store ints in binary, octal and hexadecimal.
Each of the three types are assigned to 3 different variables and then printed for the user.
**/
#include <stdio.h>

int main( int argc, const char* argv[] ){
	int binary = 0b00000010;		//Binary value for 2
	int octal = 010;					//Octal value for 8
	int hex = 0x0010;				//Hex value for 16

	printf("Binary = %d", binary);
	printf("\nOctal = %d", octal);
	printf("\nHex = %d\n\n", hex);

}
