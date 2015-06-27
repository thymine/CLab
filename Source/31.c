/*************************************************************************
	>> File Name: 31.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年05月31日 星期日 20时22分31秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int x = 1, y = 2;
	int sum = 0;
	do
	{
		sum = x + y;
		x++;
		y++;
	} while (sum <= 20);
	printf("%d\n", x);
    return 0;
}
