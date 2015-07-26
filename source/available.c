/*************************************************************************
	// File Name: available.c
	// Author: Zhang
	// Created Time: 2015年07月26日 星期日 11时11分56秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    return 0;
}

void go()
{
	int cnt = 0;
	void* p;
	while (p = malloc(100 * 1024 * 1024))
	{
		cnt++;
	}
	printf("可以分配%d00Mb的空间\n", cnt);
}
