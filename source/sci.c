#include <stdio.h>

int main(int argc, char const *argv[])
{
	double d = 123.456789;
	double f = 1e-10;
	printf("%e, %E, %.16f\n", d, d, f);

	printf("%.3f\n", 0.0027);
	printf("%.3f\n", 0.0024);
	printf("%.30f\n", 0.0029);
	printf("%.3f\n", -0.00027);
	return 0;
}