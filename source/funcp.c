#include <stdio.h>

void func(int i) {
	printf("func(%d) invoked.\n", i);
}

void f(int i) {
	printf("f(%d) invoked.\n", i);
}

void g(int i) {
	printf("g(%d) invoked.\n", i);
}

void h(int i) {
	printf("h(%d) invoked.\n", i);
}

int main(int argc, char const *argv[])
{
	/* 函数指针 */
	void (*pf)(int) = func;
	printf("%p\n", pf);
	func(1);
	(*pf)(2);

	void (*p[])(int) = {f, g, h};
	int i;
	scanf("%d", &i);
	if (i >= 0 && i < sizeof(p) / sizeof(p[0])) {
		(*p[i])(i);
	}
	return 0;
}