#include <stdio.h>
#include <string.h>

size_t my_strlen(const char * s)
{
	int index = 0;
	while (s[index] != '\0') {
		index++;
	}
	return index;
}

int main(int argc, char const *argv[])
{
	char hello[] = "Hello, world!";
	printf("strlen(hello) = %d\n", strlen(hello));
	printf("sizeof(hello) = %d\n", sizeof(hello));
	printf("my_strlen(hello) = %d\n", my_strlen(hello));
	return 0;
}