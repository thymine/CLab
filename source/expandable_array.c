#include "expandable_array.h"

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
int array_size(const Array *a);
int* array_at(Array *a, int index);
void array_inflate(Array *a, int more_size);

int main(int argc, char const *argv[])
{
	Array a = array_create(100);
	array_free(&a);
	return 0;
}