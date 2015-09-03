#include <stdio.h>
#define cube(x)((x) * (x) * (x))
#define RADTODEG(x)((x) * 57.29578)
#define MIN(a,b)((a)>(b)?(b):(a))

int main(int argc, char const *argv[])
{
	int i;
	scanf("%d", &i);
	printf("cube(5) = %d\n", cube(i));
	printf("RADTODEG(10) = %f\n", RADTODEG(10));
	printf("MIN(13,2):%d\n", MIN(13,2));
	return 0;
}