#include <stdio.h>
#include <stdlib.h>

int main() {

	setbuf(stdout, NULL);

	char card_name[3];
	puts("Input card name: ");
	// fflush(stdout);
	scanf("%2s", card_name);
	int val = 0;
	switch(card_name[0]) {
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		default:
			val = atoi(card_name);
			break;
	}

	if (val >= 3 && val <= 6) {
		puts("count++");
	} else if (val == 10) {
		puts("count--");
	}

	printf("Card points is: %d\n", val);
	return 0;
}
