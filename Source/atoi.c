#include <stdio.h>

int atoi(char s[])
{
	int i, n;
	n = 0;
	for(i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return n;
}

int main()
{
	char s[] = "12345"; 
	int result = atoi(s);
	printf("atoi(%s) = %d\n", s, result);
	return 0;
}
