#include <stdio.h>
#include <stdlib.h>

int main() {

    setbuf(stdout, NULL);

    char card_name[3];
    int count = 0;
    do {
        puts("Input card name: ");
        // fflush(stdout);
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
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
                    puts("INVALID INPUT [1, 10]");
                    continue;
                }
                break;
        }

        if (val >= 3 && val <= 6) {
            count++;
        } else if (val == 10) {
            count--;
        }

        printf("Current count: %d\n", count);
    } while (card_name[0] != 'X');
    return 0;
}
