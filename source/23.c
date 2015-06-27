/*************************************************************************
	>> File Name: 23.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年05月31日 星期日 19时04分19秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int x = 1, y = 2;
	int sum = 0;
	do 
	{
		sum = x + y;
		x = x + 1;
		y = y + 1;
	} while (sum <= 20);
	printf("%d\n", sum);	
    return 0;
}
