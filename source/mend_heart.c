/*************************************************************************
	>> File Name: mend_heart.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2014年12月14日 星期日 15时27分35秒
 ************************************************************************/

#include <stdio.h>

void mend(char *msg)
{
	puts(msg + 6);
}

int main() 
{
	char *msg_from_amy = "Don't call me!";
	mend(msg_from_amy);
	return 0;
}
