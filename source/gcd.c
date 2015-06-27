/*************************************************************************
	// File Name: gcd.c
	// Author: Zhang
	// Created Time: 2015年06月27日 星期六 16时22分42秒
 ************************************************************************/

/**
 * Greatest Common Divisor (G.C.D; g.c.d)
 */
#include <stdio.h>

void enumerate();
void divide();

int main()
{
    // enumerate();
	divide();
	return 0;
}

void divide()
{
	int a, b, t;
	scanf("%d %d", &a, &b);
	while (b != 0)
	{
		printf("a = %d, b = %d, t = %d\n", a, b, t);
		t = a % b;
		a = b;
		b = t;
	}
	printf("gcd -> %d\n", a);
}

void enumerate()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int min = a < b ? a : b;
	int i;
	int gcd = 1;
	for (i = 1; i <= min; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}
	printf("gcd -> %d\n", gcd);
}
