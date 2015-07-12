/*************************************************************************
	// File Name: integer.c
	// Author: Zhang
	// Created Time: 2015年07月12日 星期日 15时20分54秒
 ************************************************************************/

#include <stdio.h>

void sf();
void cplmt();
void maxint();
void octhex();

int main()
{
	// sf();
	// cplmt();	
	// maxint();
	octhex();
    return 0;
}

void sf() 
{
	printf("sizeof(char) = %lu\n", sizeof(char));
	printf("sizeof(short) = %lu\n", sizeof(short));
	printf("sizeof(int) = %lu\n", sizeof(int));
	printf("sizeof(long) = %lu\n", sizeof(long));
	printf("sizeof(long long) = %lu\n", sizeof(long long));
}

void cplmt()
{
	char c = -128;
	c = c - 1;
	printf("c = %d\n", c); // 127
	
	unsigned char uc = 255;
	uc = uc + 1;
	printf("uc = %d\n", uc); // 0

	int i = 128;
	printf("i = %d\n", i); // 128
}

void maxint()
{
	int i = -1;
	printf("maximum unsigned integer = %u\n", i);
}

void octhex()
{
	char c = 012;
	int i = 0x12;
	printf("c = %d, i = %d\n", c, i);
	printf("c = 0%o, i = 0x%x\n", c, i);

	scanf("%o", &c);
	printf("c = %d\n", c);
}
