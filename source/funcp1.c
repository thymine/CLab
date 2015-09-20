#include <stdio.h>

int plus(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

void calc(int (*c)(int a, int b), int a, int b)
{
	printf("result: %d\n", (*c)(a, b));
}

int main(int argc, char const *argv[])
{
	calc(plus, 3, 4);
	calc(minus, 2, 1);
	return 0;
}