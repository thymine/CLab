/*************************************************************************
	// File Name: string.c
	// Author: Zhang
	// Created Time: 2015年07月12日 星期日 10时47分15秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

void e();
void f();
void g();
void cmp();
void cpy();
void cat();
void chr();

int main()
{
	// e();
	// f();
	// g();
	// cmp();
	chr();
	// cpy();
	// cat();
    return 0;
}

void chr()
{
	char x[] = "My name is Zhang! You can call me Z!";
    char *p = strchr(x, 'Z');
	printf("x = %s\n", x);
	printf("p = %c\n", *p);
	printf("x -> %p\n", &x);
	printf("p -> %p\n", p);

	char *rp = strrchr(x, 'Z');
	printf("rp -> %p\n", rp);
}

void cat()
{
	char a[100] = "Hello";
	char b[100] = "World";
	// strcat(a, b);
	strncat(a, b, 5);
	printf("a = %s\n", a);
	printf("b = %s\n", b);
}

void cpy()
{
	char m[] = "hello";
	char n[20] = "world!";
	// strcpy(n, m);
	strncpy(n, m, 3);
	printf("sizeof(n) = %lu\n", sizeof(n));
	printf("n = %s\n", n);
}

void cmp()
{
	char a[] = "mnfzyy";
	char b[] = "mob";
	char c[] = "oom";
	char d[] = "exit";
	// printf("a <> b ? %d\n", strcmp(a, b));
	// printf("a <> c ? %d\n", strcmp(a, c));
	// printf("a <> d ? %d\n", strcmp(a, d));
	printf("a <> b ? %d\n", strncmp(a, b, 3));
	printf("a <> c ? %d\n", strncmp(a, c, 3));
	printf("a <> d ? %d\n", strncmp(a, d, 3));
}

void g()
{
	char s[] = "Hello";
	printf("strlen(s) = %lu\n", strlen(s));
	printf("sizeof(s) = %lu\n", sizeof(s));
}

void e()
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

