/**
memcpy.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows how memory is copied with memcpy().
**/
#include <stdio.h>
#include <string.h>
int main(void){

	union{
		int xi;
		float xf;
	} d;

	printf("union d's addresses\n");
	printf("%p\n", &d);
	printf("%p\n", &d.xi);
	printf("%p\n", &d.xf);

	union{
		int zi;
		char zc[4];
	} z;

	printf("union z's addresses\n");
	printf("%p\n", &z);
	printf("%p\n", &z.zi);
	printf("%p\n", &z.zc);

	memcpy(&d,&z,sizeof(d)); //cpy memory contents to new address
	//print contents of address

}
