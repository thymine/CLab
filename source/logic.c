#include "stdio.h"
#include "stdbool.h"

int main(int argc, char const *argv[])
{
	int a = -1;
	if (a > 0 && a++ > 0) // a < 0, a++ won't be executed!
		printf("a = %d\n", a);
	else
		printf("a = %d\n", a); // will print a = -1

	bool b = false;
	if (!b || (b && !b))
		printf("true\n");
	else
		printf("false\n");
	return 0;
}