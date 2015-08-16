#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char * my_strcat(char *dst, const char *src);

int main(int argc, char const *argv[])
{
	char s1[] = "hello,";
	char s2[] = "world!";
	// strcat(s1, s2); // Append s2 to s1
	// my_strcat(s1, s2);
	// printf("%s\n", s1);
	printf("%s\n", my_strcat(s1, s2));
	return 0;
}

char * my_strcat(char *dst, const char *src) 
{
	char * t = dst;
	char *p = strchr(dst, '\0');
	while ((*p++ = *src++));
	*p = '\0';
	return t;
}