#include "stdio.h"

int main(int argc, char const *argv[])
{
	int i, j;
	for (i = 0, j = 9; i <= j; i++, j--)
	{
		printf("i = %d, j = %d\n", i, j);
	}
	return 0;
}