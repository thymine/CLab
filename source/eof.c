#include <stdio.h>

int main(int argc, char const *argv[])
{
	int ch;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	puts("EOF\n");
	return 0;
}