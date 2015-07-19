#include "stdio.h"

void minmax(int a[], int len, int *max, int *min);
void f();
void p();

int main(int argc, char const *argv[])
{
	// f();
	p();
	return 0;
}

void minmax(int a[], int len, int *max, int *min)
{
	/* a == &a[0], 数组a的地址即为数组第一个元素的地址 */
	printf("minmax: sizeof(a) = %u\n", sizeof(a));
	printf("minmax: a -> %p\n", a);

	*max = *min = a[0];
	int i;
	for (i = 0; i < len; i++)
	{
		if (*max > a[i])
			*max = a[i];
		if (*min < a[i])
			*min = a[i];
	}
}

void p()
{
	int *p;
	int a = 2;
	p = &a;
	printf("p -> a: p[0] = %d\n", p[0]);
	int b[] = {1, 0, 2, 9, 8};
	p = b;
	printf("p -> b: p[0] = %d\n", p[0]);
	printf("*b = %d\n", *b);
}

void f()
{
	int a[] = {1, 3, 1, 4, 5, 8, 7, 6, 2, 9, 0};
	int len = sizeof(a) / sizeof(a[0]);
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d", a[i]);
		if (i < len - 1)
		{
			printf(",");
		}
		else
		{
			printf("\n");
		}
	}

	int min, max;
	printf("main: sizeof(a) = %u\n", sizeof(a));
	printf("main: a -> %p\n", a);

	minmax(a, len, &min, &max);
	printf("min = %d, max = %d\n", min, max);
}