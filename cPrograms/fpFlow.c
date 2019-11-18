/**
fpFlow.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows how overflow and underflow work for floating points.
Min and max values are stored in variables max and min. 1 is added to max and 1 is
subtracted from min. This results in an overflow and underflow. The results are
printed to the user.
**/
#include <stdio.h>
#include <float.h>

int main( int argc, const char* argv[] ){
	float max = FLT_MAX;
	float min = -FLT_MAX;
	printf("max = %f", max);				//Show max is sotred correctly
	printf("\nmin = %f", min);		//Show min is stored correctly

	max = max+1;
	min = min-1;
	printf("\nOverflow (max+1) = %f\n", max);		//Result of subtracting 1 from min
	printf("Underflow (min-1) = %f\n\n", min);		//Result of adding 1 to max
}
