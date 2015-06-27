/*************************************************************************
	>> File Name: avg.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年05月31日 星期日 20时37分55秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	double c = (a + b) / 2.0;
	printf("Avg of %d and %d is %f\n", a, b, c);
    return 0;
}
