/*************************************************************************
	// File Name: freemem.c
	// Author: Zhang
	// Created Time: 2015年07月26日 星期日 12时04分40秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void release();

int main()
{
	release();
    return 0;
}

void release()
{
	void* p = 0;
	int cnt = 0;
	p = malloc(100 * 1024 * 1024);
	printf("Memory Allocated...\n");
	// p++; // Error! 
	free(p); // p set to 0, free() works properly
	printf("Memory Freed!\n");
}
