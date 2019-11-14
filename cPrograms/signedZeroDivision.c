
#include <stdio.h>

int main( int argc, const char* argv[] ){
	signed int result1 = 0/0, result2 = 10/0, result3 = 0/10;

	printf("\nzero/zero = %d", result1);
	printf("\nten/zero = %d", result2);
	printf("\nzero/ten = %d\n\n", result3);

}
