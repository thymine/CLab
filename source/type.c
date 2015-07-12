/*************************************************************************
	// File Name: type.c
	// Author: Zhang
	// Created Time: 2015年07月12日 星期日 15时12分45秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int a = 3;
	printf("a = %d\n", a);
	printf("sizeof(a) = %lu\n", sizeof(a));
	printf("sizeof(a + 0.1) = %lu\n", sizeof(a + 0.1));
	printf("sizeof(a++) = %lu\n", sizeof(a++));
	printf("/// a = %d\n", a);
    return 0;
}
