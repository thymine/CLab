#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%f\n", 1.0 / 0.0);
	printf("%f\n", -1.0 / 0.0);
	printf("%f\n", 0.0 / 0.0);
	// printf("%d\n", 1 / 0);
	return 0;
}