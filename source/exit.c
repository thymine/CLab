/*************************************************************************
	// File Name: exit.c
	// Author: Zhang
	// Created Time: 2015年06月27日 星期六 15时51分45秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	int one, two, five;
	int x; // x = a * one + b * two + c * three;
	int exit = 0; // exit flag
	scanf("%d", &x);
	for (one = 1; one < x * 10 / 1; one++)
	{
		for (two = 1; two < x * 10 / 2; two++)
		{
			for (five = 1; five < x * 10 / 5; five++)
			{
				if (one * 1 + two * 2 + five * 5 == x * 10)
				{
					printf("%d * 1 + %d * 2 + %d * 5 = %d * 10\n", one, two, five, x);
					// exit = 1;
					// break;
					goto out; // use goto to jump out of multiple recursion
				}
			}
			// if (exit) break;
		}
		// if (exit) break;
	}
out:
    return 0;
}
