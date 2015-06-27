/*************************************************************************
	>> File Name: 25.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年05月31日 星期日 19时08分29秒
 ************************************************************************/

#include <stdio.h>

long int Fact(int n);

int main()
{
	printf("%ld\n", Fact(4));
    return 0;
}

long int Fact(int n)
{
	long int x;
	if (n > 1)
	{
		x = Fact(n - 1);
		return n * x;
	}
	else 
	{
		return 1;
	}
}
