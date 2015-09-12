#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%09.2f\n", 23.45);
	printf("%-+9d\n", 234);
	printf("%*d\n", 4, 234);
	return 0;
}