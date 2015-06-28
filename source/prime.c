/*************************************************************************
	// File Name: prime.c
	// Author: Zhang
	// Created Time: 2015年06月27日 星期六 15时21分10秒
 ************************************************************************/

#include <stdio.h>

int isPrime(int x)
{
		int i;
		int isPrime = 1; // x is a prime number
		for (i = 2; i < x; i++)
		{
			if (x % i == 0)
			{
				isPrime = 0; // x is not a prime number
				break;
			}
		}
		return isPrime;
}

int main()
{
	int x = 2;
	int count = 0; // e.g. get the top 50 prime numbers
	// for (x = 2; x < 100; x++)
	// for (x = 2; count < 50; x++)
	while (count < 50)
	{
		if (isPrime(x))
		{
			count++;
			printf("%d ", x);
		}
		x++;
	}
	printf("\n");
    return 0;
}
