#include <stdio.h>

enum colors {RED, GREEN, BLUE, NumOfColors};

int main(void)
{
	enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, 
			JUL, AUG, SEP, OCT, NOV, DEC};
	printf("JAN = %d\n", JAN);

	char *colorNames[NumOfColors] = {"red", "green", "blue"};
	printf("%s\n", colorNames[1]);
	return 0;
}
