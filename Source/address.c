/*************************************************************************
	>> File Name: address.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2014年12月13日 星期六 20时02分51秒
 ************************************************************************/

#include<stdio.h>

int z = 2;

int main()
{
	int x = 1;
	printf("%d is stored at %p\n", x, &x);
	printf("%d is stored at %p\n", z, &z);
	return 0;
}
