#include <stdio.h>

void func() {
	printf("%s\n", "func() invoked.");
}

int main(int argc, char const *argv[])
{
	/* 函数指针 */
	void (*pf)() = func;
	printf("%p\n", pf);
	func();
	(*pf)();
	return 0;
}