#include "stdio.h"
#include "inttypes.h"

void f();
void g();

int main(int argc, char const *argv[])
{
	// f();
	g();
	return 0;
}

void g()
{
	char c = 12;
	short s = 2334;
	int i = 129721;
	long long int l = 21874382098754L;

	i = (int) l;
	s = (short) i;
	c = (char) s;
	printf("c = %d, s = %d, i = %d, l = %I64d\n", c, s, i, l); // %lld doesn't work here
}

void f()
{
	char c = 12;
	short s = 2334;
	int i = 129721;
	unsigned long l = 218743820L;

	s = c;
	i = s;
	l = i;
	printf("c = %d, s = %d, i = %d, l = %ld\n", c, s, i, l);
}