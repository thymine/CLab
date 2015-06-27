/* Compare function - Which is larger. */
#include <stdio.h>

int larger(int a , int b)
{
	if (a > b)
	{
		return a;
	}
	else 
	{
		return b;
	}
}

void complain()
{
	puts("I'm really not happy");
}

int main()
{
	int greatest = larger(10, 11);	
	printf("10 and 11, %i is larger!\n", greatest);
	complain();
	return 0;
}
