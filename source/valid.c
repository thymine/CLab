#include <stdio.h>
#include <math.h>

#define RES 5.555

int main(int argc, char const *argv[])
{
	float a, b, c;

	a = 1.234f;
	b = 4.321f;
	c = a + b;

	if (c == RES)
	{
		printf("c = %f, c = %f\n", RES, c);
		printf("c = %f, c = %.10f\n", RES, c);
	}
	else
	{
		printf("c != %f, c = %f\n", RES, c);
		printf("c != %f, c = %.10f\n", RES, c);
	}

	if (fabs(c - RES) < 1e-5)
	{
		printf("c = %f, c = %.10f\n", RES, c);
	}
	return 0;
}