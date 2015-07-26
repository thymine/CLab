/*************************************************************************
	// File Name: memalloc.c
	// Author: Zhang
	// Created Time: 2015年07月26日 星期日 10时58分03秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	printf("输入需要的int数量: ");
	scanf("%d", &number);
	int* p = malloc(number * sizeof(int));
	// 填充值到分配的内存空间
	int i;
	for (i = 0; i < number; i++)
	{
		scanf("%d", &p[i]);
	}
	printf("---\n");
	// 逆序输出所填充的值
	for (i = number - 1; i >= 0; i--)
	{
		printf("%d\n", p[i]);
	}
	// 释放内存空间
	free(p);
    return 0;
}
