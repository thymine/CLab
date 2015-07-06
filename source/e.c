/*************************************************************************
	// File Name: e.c
	// Author: Zhang
	// Created Time: 2015年07月04日 星期六 20时45分51秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

void _o();
void _p();

int main()
{
	_p();
    return 0;
}

void _o()
{
	int n;
	scanf("%d", &n);
	double res = pow((1 + 1.0 / n), n);
	printf("e = %.1000lf\n", res);
}

void _p()
{
	int n;
	scanf("%d", &n);
	double base = 1 + 1.0 / n;	
	double res = 1;
	int i;
	for (i = 0; i < n; i++)
	{
		res *= base;	
	}
	printf("e = %.1000lf\n", res);
}
