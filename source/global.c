#include <stdio.h>

int f(void);

int g; // default value is 0

int main(int argc, char const *argv[])
{
	printf("in %s g = %d\n", __func__, g); // g = 12
	f();
	printf("again in %s g = %d\n", __func__, g); // g = 14
	return 0;
}

int f(void)
{
	printf("in %s g = %d\n", __func__, g); // g = 12
	g += 2;
	printf("again in %s g = %d\n", __func__, g); // g = 14
	return g;
}