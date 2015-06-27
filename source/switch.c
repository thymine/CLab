#include <stdio.h>

int main(void)
{
	printf("Please input a number: ");
	int number = 0;
	scanf("%d", &number);
	switch(number)
	{
		case 1:
			printf("You just input 1\n");
		break;
		case 2:
			printf("You just input 2\n");
		break;
		case 3:
			printf("You just input 3\n");
		break;
		default:
		break;
			
	}
	return 0;
}
