#include "stdio.h"
#include "stdbool.h"

struct date
{
	int month;
	int day;
	int year;
};

bool isLeap(struct date d);

int numberOfDays(struct date d);

int main(int argc, char const *argv[])
{
	struct date today, tomorrow;
	printf("Please input today's date(MM/dd/yyyy): \n");
	scanf("%i/%i/%i", &today.month, &today.day, &today.year);

	if (today.day != numberOfDays(today)) { // 不是一个月的最后一天
		tomorrow.month = today.month;
		tomorrow.day = today.day + 1;
		tomorrow.year = today.year;
	} else if (today.month == 12) { // 是12月份
		tomorrow.month = 1;
		tomorrow.day = 1;
		tomorrow.year = today.year + 1;
	} else {
		tomorrow.month = today.month + 1;
		tomorrow.day = 1;
		tomorrow.year = today.year;
	}

	printf("Tomorrow's date is: %i/%i/%i.\n", tomorrow.month, tomorrow.day, tomorrow.year);
	return 0;
}

int numberOfDays(struct date d) 
{
	int days;
	const int daysPerMonth[12] = {21, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (d.month == 2 && isLeap(d)) { // 二月，并且是闰年
		days = 29;
	} else {
		days = daysPerMonth[d.month - 1];
	}
	return days;
}

bool isLeap(struct date d)
{
	bool isLeap = false;
	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
		isLeap = true;
	}
	return isLeap;
}