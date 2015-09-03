#include <stdio.h>
#define cube(x)((x) * (x) * (x))
#define RADTODEG(x)((x) * 57.29578)
#define MIN(a,b)((a)>(b)?(b):(a))

#define __PRT_AGE_BY_NAME(name, age) \
	void print##name() {printf("%d\n", age);}

int main(int argc, char const *argv[])
{
	int i;
	scanf("%d", &i);
	printf("cube(5) = %d\n", cube(i));
	printf("RADTODEG(10) = %f\n", RADTODEG(10));
	printf("MIN(13,2):%d\n", MIN(13,2));

	__PRT_AGE_BY_NAME(Zhang, 22);

	printZhang(17);
	return 0;
}