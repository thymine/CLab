/*************************************************************************
	// File Name: meminfo.c
	// Author: Zhang
	// Created Time: 2015年06月30日 星期二 21时38分17秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	printf("sizeof(char)=%ld\n", sizeof(char));
	printf("sizeof(short)=%ld\n", sizeof(short));
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(long)=%ld\n", sizeof(long));
	printf("sizeof(float)=%ld\n", sizeof(float));
	printf("sizeof(double)=%ld\n", sizeof(double));

	int i = 1;
	int p = (int) &i;
	printf("p=0x%x\n", p);
	printf("&i=%p\n", &i);
	printf("sizeof(&i)=%lu\n", sizeof(&i));

	int a[10];
	printf("&a=%p\n", &a);
	printf("a=%p\n", a);
	printf("a[0]=%p\n", &a[0]);
	printf("a[1]=%p\n", &a[1]);
    return 0;
}
