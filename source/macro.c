#include <stdio.h>

#define PI\
 3.141592653589793
#define E 2.71828 
#define PRT printf("PI + E = %f\n", (PI + E))

int main(int argc, char const *argv[])
{
	printf("PI = %f\n", PI);
	printf("E = %f\n", E);
	PRT;
	return 0;
}