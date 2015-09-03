#include <stdio.h>

int* f();

void g();

int main(int argc, char const *argv[])
{
	int *p = f();
	printf("*p = %d\n", *p);
	g();
	printf("*p = %d\n", *p);
	return 0;
}

int* f()
{
	int x = 1;
	printf("&x: %p\n", &x);
	printf("x = %d\n", x);
	return &x;
}

void g()
{
	int y = 3;
	printf("&y: %p\n", &y);
	printf("y = %d\n", y);
}