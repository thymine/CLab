/*************************************************************************
	>> File Name: ifelseif.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年06月21日 星期日 21时27分14秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int f, x;
	scanf("%d", &x);
	if (x < 0) {
		f = -1;
	} else if (x == 0) {
		f = 0;
	} else {
		f = 2 * x;
	}
	printf("f = %d\n", f);
    return 0;
}
