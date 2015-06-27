#include <stdio.h>

char lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + ('a' - 'A');
	else 
		return c;	
}

int main()
{
	char c = lower('B');
	printf("lower(\'%c\') = %c\n", 'B', c);
	return 0;
}
