/**
printSizes.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows the different storage sizes of int, float, double,
char, short and long. The size is printed to the user for each data type.
**/
#include <stdio.h>

int main(int argc, const char* argv[]){

	//Use sizeof() for displaying data type size.
  printf("Size of int: %lu bytes\n",sizeof(int));
  printf("Size of float: %lu bytes\n",sizeof(float));
  printf("Size of double: %lu bytes\n",sizeof(double));
  printf("Size of char: %lu byte\n",sizeof(char));
	printf("Size of short: %lu byte\n",sizeof(short));
	printf("Size of long: %lu byte\n\n",sizeof(long));

  return 0;
}
