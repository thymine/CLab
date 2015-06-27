#include <stdio.h>

int main(void)
{
	enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, 
			JUL, AUG, SEP, OCT, NOV, DEC};
	printf("JAN = %d\n", JAN);
	return 0;
}
