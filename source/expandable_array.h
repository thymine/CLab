#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct 
{
	int *array;
	int size;
} Array;

/* 创建Array结构 */
Array array_create(int init_size);

/* 释放内存占用 */
void array_free(Array *a);

/* 返回数组大小 */
int array_size(const Array *a);

/* 获取指定索引位置的值，返回指针 */
int* array_at(Array *a, int index);

/* 获取指定索引位置的值，返回值 */
int array_get(const Array *a, int index);

/* 赋值 */
void array_set(Array *a, int index, int value);

/* 增大空间 */
void array_inflate(Array *a, int more_size);

/* 检查数组长度 */
void check_size(Array *a, int index);

#endif