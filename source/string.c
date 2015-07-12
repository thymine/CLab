/*************************************************************************
	// File Name: string.c
	// Author: Zhang
	// Created Time: 2015年07月12日 星期日 10时47分15秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	printf("Hello, "
			"world!\n");

	char word[] = "world";
	char text[10] = "text";
	char *p = "pointer";
	printf("word=%s\n", word);
	printf("text=%s\n", text);
	printf("p=%s\n", p);

    return 0;
}
