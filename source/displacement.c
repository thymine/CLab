#include <stdio.h>

int main(int argc, char const *argv[])
{
	long unsigned int c = 0xAAUL;
	printf(" c = %lX\n", c);
	printf(" c << 2 = %lX\n", c << 2);
	printf(" c << 200 = %lX\n", c << 200);

	int a = 0x80000000;
	unsigned int b = 0x80000000;
	printf("a = %d\n", a);
	printf("b = %u\n", b);
	// move to right
	printf("a >> 1 = %d\n", a >> 1);
	printf("b >> 1 = %u\n", b >> 1);
	// move to left
	printf("a << 1 = %d\n", a << 1);
	printf("b << 1 = %u\n", b << 1);
	return 0;
}