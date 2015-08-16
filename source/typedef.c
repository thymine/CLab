#include "stdio.h"

typedef struct point
{
	int x;
	int y;
} Point; // 使用typedef定义结构别名

int main(int argc, char const *argv[])
{
	Point p = {12, 4};
	printf("p(%i, %i)\n", p.x, p.y);
	return 0;
}