/*************************************************************************
	// File Name: move.c
	// Author: Zhang
	// Created Time: 2015年07月26日 星期日 09时43分17秒
 ************************************************************************/

#include <stdio.h>

void pc();

void pi();

int main()
{
	pc();
	printf("------------------------\n");
	pi();
    return 0;
}

void pi()
{
	int is[] = {1, 2, 4};
	int *p = is;
	printf("int[]\n");
	printf("p \t= %p\n", p);
	printf("p + 1\t= %p\n", p + 1);
}

void pc()
{
	char cs[] = {1, 2, 4};
	char *p = cs;
	printf("char[]\n");
	printf("p\t= %p\n", p);
	printf("p + 1\t= %p\n", p + 1);
}
