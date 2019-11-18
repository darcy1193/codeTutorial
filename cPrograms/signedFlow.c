/**
signedFlow.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows what happens when there is overflow and underflow
in a signed integer. Min and max values are stored in variables max and min. 1 is added to max and 1 is
subtracted from min. This results in an overflow and underflow. The results are
printed to the user.
**/
#include <stdio.h>
#include <limits.h>

int main( int argc, const char* argv[] ){
	signed int max = INT_MAX;
	signed int min = INT_MIN;
	printf("max = %d", max);				//Show max is sotred correctly
	printf("\nmin = %d", min);		//Show min is stored correctly

	max = max+1;
	min = min-1;
	printf("\nOverflow (max+1) = %d\n", max);		//Result of subtracting 1 from min
	printf("Underflow (min-1) = %d\n\n", min);		//Result of adding 1 to max
}
