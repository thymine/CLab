/*************************************************************************
	// File Name: character.c
	// Author: Zhang
	// Created Time: 2015年07月06日 星期一 21时58分51秒
 ************************************************************************/

#include <stdio.h>

void f1();
void f2();

int main()
{
	f2();
    return 0;
}

void f1()
{
	int i;
	char c;
	scanf("%d %c", &i, &c);
	printf("i = %d, i = '%c', c = %d, c = '%c'\n", i, i, c, c);
}

void f2()
{
	printf("张三\b李四\n");
	printf("12345\t7890\n");
	printf("123\t45678\n");
	printf("1234567\t890\n");
	printf("123\t456\n\r7890\n");
}
