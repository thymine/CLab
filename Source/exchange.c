/*************************************************************************
	>> File Name: exchange.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年05月31日 星期日 20时54分41秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int a, b, tmp;
	scanf("%d %d", &a, &b);
	puts("Before Exchange: ");
	printf("a = %d, b = %d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	puts("After Exchange...");
	printf("a = %d, b = %d\n", a, b);
    return 0;
}
