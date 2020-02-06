/**
epsilon.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows how to find machine epsilon FLT_EPSILON AND DBL_EPSILON.
**/
#include <stdio.h>
#include <float.h>
int main(void){

	float meps = 1.0;
	while ((1.0+meps)>1.0){	//Divide machine epsilon by 2 until adding it to 1 still equal 1
		meps /= 2.0;
	}

	printf("Machine epsilon = %.20f\n", meps);
	printf("Float epsilon = %.20f\n", FLT_EPSILON);
	printf("Double epsilon = %.20f\n", DBL_EPSILON);	//Notice how DBL_EPSILON is 2x machine epsilon
}
