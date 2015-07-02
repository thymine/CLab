/*************************************************************************
	>> File Name: address.c
	>> Author: Zhang
	>> Created Time: 2014年12月13日 星期六 20时02分51秒
 ************************************************************************/

#include<stdio.h>

int z = 2;

void f(int *p);
void g(int k);

int main()
{
	int x = 1;
	printf("%d is stored at %p\n", x, &x);
	printf("%d is stored at %p\n", z, &z);
	f(&x);
	// after invoke f(), x was changed!
	g(x);
	return 0;
}

void f(int *p)
{
	printf("*p is %d, stored at %p\n", *p, p);
	printf("p is %p, stored at %p\n", p, &p);
	*p = *p + 1;
}

void g(int k)
{
	printf("k is %d, stored at %p\n", k, &k);
}
