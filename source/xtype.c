#include <stdio.h>

int main(int argc, char const *argv[])
{
	int g = 3;
	int n;
	printf("%i\n", 32);
	printf("%d\n", 32);
	printf("%u\n", 32);
	printf("%o\n", 32);
	printf("%x\n", 32);
	printf("%X\n", 32);
	printf("%f\n", 32.0);
	printf("%F\n", 32.0);
	printf("%e\n", 322394798324739284);
	printf("%E\n", 329038452034820394);
	printf("%g\n", 32.21);
	printf("%G\n", 32.34);
	printf("%a\n", 32.232);
	printf("%A\n", 32.3492023);
	printf("%c\n", 32);
	printf("%s\n", "hello, world!");
	printf("%p\n", &g);
	printf("%d%n\n", 12345, &n);
	printf("%d\n", n);
	return 0;
}