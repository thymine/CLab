#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char* my_strcpy(char *dst, const char *src);

int main()
{
	char src[] = "hello, world!";
	char *dst = (char*) malloc(strlen(src) + 1);
	// strcpy(dst, src);
	char *d = my_strcpy(dst, src);

	printf("%s\n", dst);
	printf("%s\n", d);
	return 0;
}

char* my_strcpy(char *dst, const char *src)
{
	char *ret = dst; // Original pointer

	while (*src) { // *src != '\0'
		*dst++ = *src++;
	}
	*dst = '\0'; // Append '\0' for dst
	// ret = dst;
	return ret;
}