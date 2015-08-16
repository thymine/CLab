#include "stdio.h"

/* i, c 共享内存 */
typedef union shared {
	int i;
	char c;
} Shared;

int main(int argc, char const *argv[])
{
	Shared s;
	s.c = 'a';
	printf("i = %i, c = %i\n", s.i, s.c); // i = 97, c = 97

	s.c = 'b';
	s.i = 0xDEADBEEF; // DE, AD, BE, EF
	printf("i = %i, c = %i\n", s.i, s.c); // c的值被覆盖
	return 0;
}