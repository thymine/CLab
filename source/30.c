/*************************************************************************
	>> File Name: 30.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年05月31日 星期日 20时20分51秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int x = 10, y = 50, z = 30;
	if (y < z)
		x = x -y;
	else 
		x = x - z;
	x = x - y;
	if (x < z)
		x = y + 20;
	x = x - z;
	if (x > y)
		x = x - y;
	printf("%d\n", x);
    return 0;
}
