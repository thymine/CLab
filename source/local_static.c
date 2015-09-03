#include <stdio.h>

int f(void);

int i;

int main(int argc, char const *argv[])
{
	f();
	f();
	f();
	return 0;
}

int f(void)
{
	static int g = 1;
	int h = 1;
	printf("&i: %p\n", &i);
	printf("&g: %p\n", &g);
	printf("&h: %p\n", &h);

	printf("in %s g = %d\n", __func__, g);
	i += 1;
	g += 1;
	h += 1;
	printf("again in %s g = %d\n", __func__, g);
	return g;
}