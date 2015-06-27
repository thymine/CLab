/*************************************************************************
	>> File Name: 36.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年05月31日 星期日 20时29分05秒
 ************************************************************************/

#include <stdio.h>

long int fact(int n);

int main()
{
	printf("%ld\n", fact(4));
    return 0;
}

long int fact(int n)
{
	long int x;
	if (n > 1)
	{
		x = fact(n - 1);
		return (n + x) * 2;
	}
	else
		return 1;
}
