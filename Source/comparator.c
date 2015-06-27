/*************************************************************************
	>> File Name: comparator.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年06月21日 星期日 17时03分13秒
 ************************************************************************/

#include <stdio.h>

void planA();
void planB();
void planC();
void planD();

int main()
{
	// planA();
	// planB();
	// planC();
	planD();
    return 0;
}

void planA()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int max = b;
	if (a > b)
	{
		max = a;
	}
	printf("max: %d\n", max);
}

void planB()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int max = 0;
	if (a > b) {
		max = a;
	} else {
		max = b;
	}
	printf("max: %d\n", max);
}

void planC()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int max = 0;
	if (a > b) {
		max = a;
	}
	if (a <= b) {
		max = b;
	}
	printf("max: %d\n", max);
}

void planD()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = 0;
	if (a > b) {
		if (a > c) {
			max = a;
		} else {
			max = c;
		}
	} else {
		if (b > c) {
			max = b;
		} else {
			max = c;
		}
	}
	printf("max: %d\n", max);
}
