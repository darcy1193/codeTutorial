/**
memcpy.c

AUTHOR : Daniel Darcy
DESCRIPTION : This program shows how memory is copied with memcpy().
**/
#include <stdio.h>
#include <string.h>
#define MAX_CHAR 100

int main(void) {
	char str1[MAX_CHAR] = "Hello World!";
	char str2[MAX_CHAR] = "Gonna copy this";

	printf("Before copy\n");
	printf("str1: %s\n",str1);
	printf("str2: %s\n",str2);

	//copy str2(source) to str1(destination)
	memcpy(str1, str2, strlen(str2));

	printf("After copy\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	return 0;
}
