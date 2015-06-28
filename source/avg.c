/*************************************************************************
	>> File Name: avg.c
	>> Author: Zhang
	>> Created Time: 2015年05月31日 星期日 20时37分55秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	double sum = 0.0;
	int x;
	int count = 0;
	int numbers[100];
	scanf("%d", &x);
	while(x != -1)
	{
		numbers[count] = x;
		// debug start:
		{
			printf("%d ", count);
			int i;
			for (i = 0; i <= count; i++)
			{
				printf("%d", numbers[i]);
				if (i < count)
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		// debug end.
		sum += x;
		count++;
		scanf("%d", &x);
	}
	if (count > 0)
	{
		double avg = sum / count;
		printf("%f\n", avg);
		int i;
		for (i = 0; i < count; i++)
		{
			if (numbers[i] > avg)
			{
				printf("%d", numbers[i]);
				if (i < count - 1)
				{
					printf(" ");
				}
				else if (i < count)
				{
					printf("\n");
				}
			}
		}
	}
    return 0;
}
