/*************************************************************************
	>> File Name: average.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年06月22日 星期一 20时39分09秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int number, count = 0;
	double sum = 0;
	do
	{
		scanf("%d", &number);
		if (number != -1)
		{
			sum += number;
			count++;
		}
	} 
	while (number != -1);

	scanf("%d", &number);
	while(number != -1)
	{
		sum += number;
		count++;
		scanf("%d", &number);
	}

	printf("average: %.2f\n", sum / count);
    return 0;
}
