/*************************************************************************
	// File Name: counting.c
	// Author: Zhang
	// Created Time: 2015年06月28日 星期日 14时06分21秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int x;
	const int n = 10; // constant: array length
	scanf("%d", &x);
	int count[n];
	// initinalize array
	int i;
	for (i = 0; i < n; i++)
	{
		count[i] = 0;
	}
	while (x != -1) 
	{
		// counting
		if (x >= 0 && x <=9)
		{
			count[x]++;
		}
		scanf("%d", &x);
	}
	for (i = 0; i < sizeof(count) / sizeof(count[0]); i++)
	{
		printf("%d: %d\n", i, count[i]);
	}

    return 0;
}
