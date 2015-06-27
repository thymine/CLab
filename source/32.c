/*************************************************************************
	>> File Name: 32.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年05月31日 星期日 20时23分36秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int n = 6, x = 0, y = 1;
	int z, i;
	for (i = 1; i <= n - 1; i++)
	{
		z = x + y;
		x = y;
		y = z;
	}
	printf("%d\n", z);
    return 0;
}
