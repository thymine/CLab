#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* 1 */
	struct date
	{
		int year;
		int month;
		int day;
	};
	struct date today;
	today.year = 2015;
	today.month = 8;
	today.day = 16;
	printf("Today is %i-%i-%i\n", today.year, today.month, today.day);

	/* 2 */
	struct 
	{
		int x;
		int y;
	} p1, p2;
	p1.x = 23;
	p1.y = 32;
	p2.x = 1;
	p2.y = 9;
	printf("p1(%i, %i), p2(%i, %i)\n", p1.x, p1.y, p2.x, p2.y);

	/* 3 */
	struct color
	{
		int red;
		int green;
		int blue;
	} col;
	col = (struct color) {22, 21, 22};
	struct color gray = col; // col 和 gray 是两个结构
	gray.green = 22;
	col.blue = 23;
	printf("color(%i, %i, %i)\n", col.red, col.green, col.blue);
	printf("color(%i, %i, %i)\n", gray.red, gray.green, gray.blue);

	/* 4 */
	struct color *p = &gray; // 获取结构gray的地址
	printf("%p\n", p);

	return 0;
}