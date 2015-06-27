/*************************************************************************
	>> File Name: game.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2014年12月14日 星期日 14时33分29秒
 ************************************************************************/

#include <stdio.h>

void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int main()
{
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude, &longitude);
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
	return 0;
}
