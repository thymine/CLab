#include "expandable_array.h"
#include <stdio.h>
#include <stdlib.h>

/* 动态增加空间单位大小 */
const int BLOCK_SIZE = 20;

Array array_create(int init_size)
{
	Array a;
	/* 分配空间 */
	a.array = (int*) (malloc(sizeof(int) * init_size));
	a.size = init_size;
	return a;
}

void array_free(Array *a)
{
	free(a->array);
	a->array = NULL;
	a->size = 0;
}

int array_size(const Array *a)
{
	return a->size; // 封装，保护内部实现
}

int* array_at(Array *a, int index)
{
	check_size(a, index);
	return &(a->array[index]);
}

int array_get(const Array *a, int index)
{
	return a->array[index];
}

void array_set(Array *a, int index, int value)
{
	check_size(a, index);
	a->array[index] = value;
}

void array_inflate(Array *a, int more_size)
{
	/* 重新分配新的空间 */
	int *p = (int*) (malloc(sizeof(int)* (a->size + more_size)));
	/* 拷贝旧数据到新的空间 */
	int i;
	for (i = 0; i < a->size; i++) {
		p[i] = a->array[i];
	}
	/* 释放旧空间 */
	free(a->array);

	/* 刷新Array结构 */
	a->array = p;
	a->size += more_size;
}

void check_size(Array *a, int index)
{
	if (index >= a->size) {
		int more_size = (index / BLOCK_SIZE + 1) * BLOCK_SIZE - (a->size);
		array_inflate(a, more_size);
	}
}

int main(int argc, char const *argv[])
{
	Array a = array_create(5);

	printf("array size: %d\n", array_size(&a));

	*array_at(&a, 0) = 10; // 赋值操作
	printf("index of 0: %d\n", *array_at(&a, 0));

	array_set(&a, 1, 11);
	printf("index of 1: %d\n", array_get(&a, 1));

	int number;
	int cnt = 0;
	while(number != -1) {
		scanf("%d", &number);
		if (number != -1)
			array_set(&a, cnt, number);
		printf("array size: %d\n", array_size(&a));
		printf("index of %d: %d\n", cnt, array_get(&a, cnt));
		cnt++;
	}

	array_free(&a);
	return 0;
}