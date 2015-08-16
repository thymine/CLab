#include "stdio.h"
#include "string.h"

int my_strcmp(const char *s1, const char *s2);

int main(int argc, char const *argv[])
{
	char s1[9];
	char s2[9];

	scanf("%s", s1);
	scanf("%s", s2);

	printf("%d\n", strcmp(s1, s2));

	printf("%d\n", my_strcmp(s1, s2));
	return 0;
}

int my_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1 != '\0') {
		s1++;
		s2++;
	}
	int res = 0;
	if (*s1 < *s2) {
		res = -1;
	} else if (*s1 == *s2) {
		res = 0;
	} else {
		res = 1;
	}
	return res;
}