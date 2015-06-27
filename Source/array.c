/*************************************************************************
	>> File Name: array.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2014年12月14日 星期日 15时00分04秒
 ************************************************************************/

#include <stdio.h>

void fortune_cookie(char msg[])
{
	printf("Message reads: %s\n", msg);
	printf("msg[0]: %c\n", msg[0]);
	printf("msg[1]: %c\n", *(msg + 1));
	printf("msg occupies %li bytes\n", sizeof(msg));
}

int main()
{
	char quote[] = "hello, world!";
	printf("Size of quote[]: %li\n", sizeof(quote));
	printf("The quote string is stored at: %p\n", quote);

	fortune_cookie(quote);

	return 0;
}
