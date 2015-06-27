/*************************************************************************
	>> File Name: count.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年06月22日 星期一 16时37分54秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int a, count = 0;
	scanf("%d", &a);
	int temp = a;
	do 
	{
		temp /= 10;
		count++;
	} 
	while (temp != 0);
	printf("%d has %d digits\n", a, count);
    return 0;
}
