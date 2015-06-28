/*************************************************************************
	// File Name: swap.c
	// Author: Zhang
	// Created Time: 2015年06月28日 星期日 11时27分31秒
 ************************************************************************/

#include <stdio.h>

// void swap(); // declaration (prototype)
void swap(double a, double b);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("before: a=%d, b=%d\n", a, b);
	swap(a, b);
	printf("after: a=%d, b=%d\n", a, b);
    return -1; // echo $? -> 255
}

void swap(double a, double b)
{
	printf("in swap: a=%f, b=%f\n", a, b);
	int t;
	t = a;
	a = b;
	b = t;
}
