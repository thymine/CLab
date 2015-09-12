#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%+09d\n", 123);
	printf("%-+9d\n", 234);
	return 0;
}