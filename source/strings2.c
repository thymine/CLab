#include "cs50.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("State your name: ");
	string name = GetString();
	printf("O hai, %s!\n", name);
	return 0;
}