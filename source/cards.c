/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	puts("Enter the card_name: ");
	/* Enter two characters for the card name. */
	scanf("%2s", card_name);
	int val = 0;
	if (card_name[0] == 'K') {
		val = 10;
	} else if (card_name[0] == 'Q') {
		val = 10;
	} else if (card_name[0] == 'J') {
		val = 10;
	} else if (card_name[0] == 'A') {
		val = 1;
	} else {
		val = atoi(card_name);
	}
    if (val >= 3 && val <= 6) {
        puts("计数增加");
    } else if (val == 10) {
        puts("计数减少");
    }
	return 0;
} 
