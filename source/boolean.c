#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	bool b = 3 > 2;
	bool f = false;
	printf("%d, %d\n", b, f); // 1, 0
	f = 3;
	printf("%d\n", f); // 1
	return 0;
}