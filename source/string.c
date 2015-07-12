/*************************************************************************
	// File Name: string.c
	// Author: Zhang
	// Created Time: 2015年07月12日 星期日 10时47分15秒
 ************************************************************************/

#include <stdio.h>

void f();

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

	char t[] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
	printf("t=%s\n", t);
	char *s;
	s = t;
	t[2] = 'm';
	printf("s=%s\n", s);

	f();
    return 0;
}

void f()
{
	char p[10];
	char t[10];
	scanf("%9s", p);
	scanf("%9s", t);
	printf("p = %s\n", p);
	printf("t = %s\n", t);

	char *d = "";
	printf("d = %s\n", d);
}
