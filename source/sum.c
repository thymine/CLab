/*************************************************************************
	// File Name: sum.c
	// Author: Zhang
	// Created Time: 2015年06月27日 星期六 16时10分17秒
 ************************************************************************/

#include <stdio.h>

/**
 * f(n) = 1 + 1/2 + 1/3 + ... + 1/(n - 1) + 1/n
 * f(n) = 1 + 1/2 - 1/3 + ... - 1/(n - 1) + 1/n
 */
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	double sum = 0.0;
	double sign = 1.0;
	for (i = 1; i < n; i++)
	{
		sum += sign / i;	
		sign = -sign;
	}
	printf("f(%d)=%f\n", n, sum);
    return 0;
}
