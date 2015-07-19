#include "stdio.h"

int divide(int a, int b, double *res);

int main(int argc, char const *argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);
	double c;
	if (divide(a, b, &c))
	{
		printf("%d / %d = %.2f\n", a, b, c);
	}
	return 0;
}

int divide(int a, int b, double *res)
{
	int ret = 1;
	if (b == 0)	
		ret = 0;
	else
		*res = 1.0 * a / b;
	return ret;
}