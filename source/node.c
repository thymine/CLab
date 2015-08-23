#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct _node
// {
// 	int value;
// 	struct _node *next;
// } Node;

int main(int argc, char const *argv[])
{
	Node *head = NULL;
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			// add to linked list
			Node *p = (Node*) (malloc(sizeof(Node)));
			p->value = number;
			p->next = NULL;
			Node *last = head;
			if (last != NULL) {
				// find the last node
				while (last->next) {
					last = last->next;
				}
				// attach to it
				last->next = p;
			} else {
				head = p;
			}
		}
	} while (number != -1);
	return 0;
}