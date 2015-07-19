#include "stdio.h"

void minmax(int a[], int len, int *max, int *min);

int main(int argc, char const *argv[])
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
	minmax(a, len, &min, &max);
	printf("min = %d, max = %d\n", min, max);
	return 0;
}

void minmax(int a[], int len, int *max, int *min)
{
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