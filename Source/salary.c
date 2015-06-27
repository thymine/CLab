/*************************************************************************
	>> File Name: salary.c
	>> Author: Zhang
	>> Mail: zhanglts@163.com 
	>> Created Time: 2015年06月21日 星期日 20时42分56秒
 ************************************************************************/

#include <stdio.h>

int main()
{
	const double RATE = 8.25;
	const int STANDARD = 40;
	double pay = 0.0;
	int hours;
	
	printf("请输入工作的小时数: ");
	scanf("%d", &hours);
	if (hours > STANDARD) {
		pay = STANDARD * RATE + (hours - STANDARD) * RATE * 1.5;
	} else 
		pay = hours * RATE;
	printf("应付工资: %.2f\n", pay);
    return 0;
}
