#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	char s[] = "hello";
	char *p = strchr(s, 'l'); // Find first 'l' from left
	printf("%s\n", p); 

	char *t = strchr(p + 1, 'l'); // Find second 'l' from left
	printf("%s\n", t);

	char *u = (char *) malloc(strlen(p) + 1);
	// Copy p string to u
	strcpy(u, p);
	printf("%s\n", u);

	// Substring s to 'he'
	*p = '\0'; // Replace 'l' to '\0'
	// Now s is 'he'
	printf("%s\n", s);

	// Restore s
	*p = 'l';
	printf("%s\n", s);

	free(u);
	return 0;
}