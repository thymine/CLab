#include "expandable_array.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct 
// {
// 	int *array;
// 	int size;
// } Array;

/* 创建Array结构 */
Array array_create(int init_size)
{
	Array a;
	/* 分配空间 */
	a.array = (int*) (malloc(sizeof(int) * init_size));
	a.size = init_size;
	return a;
}

/* 释放内存占用 */
void array_free(Array *a)
{
	free(a->array);
	a->array = NULL;
	a->size = 0;
}

/* 返回数组大小 */
int array_size(const Array *a)
{
	return a->size; // 封装，保护内部实现
}

/* 获取指定索引位置的值，返回指针 */
int* array_at(Array *a, int index)
{
	return &(a->array[index]);
}

/* 获取指定索引位置的值，返回值 */
int array_get(const Array *a, int index)
{
	return a->array[index];
}

/* 赋值 */
void array_set(Array *a, int index, int value)
{
	a->array[index] = value;
}

void array_inflate(Array *a, int more_size);

int main(int argc, char const *argv[])
{
	Array a = array_create(100);

	printf("array size: %d\n", array_size(&a));

	*array_at(&a, 0) = 10; // 赋值操作
	printf("index of 0: %d\n", *array_at(&a, 0));

	array_set(&a, 1, 11);
	printf("index of 1: %d\n", array_get(&a, 1));

	array_free(&a);
	return 0;
}