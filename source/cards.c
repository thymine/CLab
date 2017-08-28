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
    int count = 0;
	do {
        puts("输入牌名：");
    	scanf("%2s", card_name);
	    int val = 0;
        switch(card_name[0]) {
            case 'J':
            case 'Q':
            case 'K':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);
                if (val < 1 || val > 10) {
                    puts("无法理解这个值");
                    continue;
                }
        }
        if (val > 2 && val < 7) {
            count++;
        } else if (val == 10) {
            count--;
        }
        printf("当前的计数：%i\n", count);
    } while (card_name[0] != 'X');
	return 0;
} 
