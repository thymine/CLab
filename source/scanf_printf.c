#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	int b = scanf("%d", &a);
	int c = printf("%d\n", a);
	printf("%d:%d\n", b, c);
	return 0;
}