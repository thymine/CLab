/*************************************************************************
	>> File Name: printn.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年05月12日 星期二 21时23分56秒
 ************************************************************************/

#include <stdio.h>

void printN(int n);

int main()
{
	int n;
	puts("Input n: ");
	scanf("%d", &n);
	printN(n);
    return 0;
}

void printN(int n)
{
	printN(n - 1);
	puts(n + "\n");
	return;
}
