/*************************************************************************
	// File Name: minmax.c
	// Author: Zhang
	// Created Time: 2015年07月02日 星期四 22时02分06秒
 ************************************************************************/

#include <stdio.h>

// void minmax(int *a);
// void minmax(int []);
// void minmax(int *);
void minmax(int *a);

int main()
{
	int a[] = {1, 2, 5, 3, 4, 7, 9, 8, 0};
	int min, max;
	printf("main: sizeof(a)=%lu\n", sizeof(a));
	printf("main: sizeof(int *)=%lu\n", sizeof(int *));
	printf("main: a=%p\n", a);
	printf("main: *a=%d\n", *a);
	printf("before: a[0]=%d\n", a[0]);
	minmax(a);
	printf("after: a[0]=%d\n", a[0]);
    return 0;
}

void minmax(int *a)
{
	printf("minmax: sizeof(a)=%lu\n", sizeof(a));
	printf("minmax: a=%p\n", a);
	a[0] = 10;
}
