#include "stdio.h"

void q();
void r();
void c();

int main(int argc, char const *argv[])
{
	// q();
	// r();
	c();
	return 0;
}

void q()
{
	int i = 3;
	// int j = 9;
	int * const q = &i; // q is const, can't point to another address
	*q = 26; // OK, i will be changed
	// q++; // Wrong, q is const
	// q = &j; // Wrong, q is read-only variable
	printf("i = %d\n", i);
	printf("*q = %d\n", *q);
	printf("*(q + 1) = %d\n", *(q + 1));
}

void r()
{
	/**
	* const在*左边表示不能通过指针修改所指位置的值；
	*	const int *p; 
	*	int const *p;
	*
	* const在*右边表示指针是常量，不能修改指针指向
	*	int * const p;
	*/
	int i = 2;
	int j = 8;
	const int *p = &i; // *p is read-only location
	// *p = 23; // Wrong
	printf("*p = %d\n", *p);
	p = &j; // OK, p can point to another location 
	printf("*p = %d\n", *p);
}

void c()
{
	const int a[] = {1, 2, 3, 4, 5};
	// a[2] = 6; // Wrong, elements can't be changed	
	printf("a[2] = %d\n", a[2]);
}