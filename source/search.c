/*************************************************************************
	// File Name: search.c
	// Author: Zhang
	// Created Time: 2015年06月28日 星期日 15时14分06秒
 ************************************************************************/

#include <stdio.h>

/**
 * find out location of key
 * @param key to find
 * @param a array
 * @param length length of a
 * return index or -1
 */
int search(int key, int a[], int length);

int main()
{
	int a[] = {2, 4, 7, 1, 3, 9, 5, 11, 21, 32, 14};
	int x;
	int loc;
	scanf("%d", &x);
	loc = search(x, a, sizeof(a) / sizeof(a[0]));
	if (loc != -1)
	{
		printf("index of %d is %d\n", x, loc);
	}
	else
	{
		printf("%d not exist.\n", x);
	}
	return 0;
}

int search(int key, int a[], int length)
{
	int i;
	int index = -1;
	for (i = 0; i < length; i++)
	{
		if (key == a[i])
		{
			index = i;	
		}
	}
	return index;
}
