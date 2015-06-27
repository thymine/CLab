/*************************************************************************
	// File Name: factorization.c
	// Author: Zhang
	// Created Time: 2015年06月27日 星期六 17时03分21秒
 ************************************************************************/
/**
 * 12435 -> 1 2 4 3 5
 */
#include <stdio.h>

long int get_mask(long int input);

int main()
{
	long int in;
	scanf("%ld", &in);
	long int mask = get_mask(in);
	int d;
	do
	{
		d = in / mask;	
		printf("%d", d);
		if (mask > 9)
		{
			printf(" ");
		}
		in %= mask;
		mask /= 10;
	} while (mask > 0);
	printf("\n");
    return 0;
}

long int get_mask(long int input)
{
	long int mask = 1;
	while (input > 9)
	{
		input /= 10;
		mask *= 10;
	}
	return mask;
}
