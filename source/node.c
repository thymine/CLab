#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct _node
// {
// 	int value;
// 	struct _node *next;
// } Node;

// typedef struct _list
// {
// 	Node *head;
// 	Node *tail;
// } List;

int main(int argc, char const *argv[])
{
	List list;
	list.head = NULL;
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			add(&list, number);
		}
	} while (number != -1);

	return 0;
}

void add(List *list, int number) 
{
	// add to linked list
	Node *p = (Node*) (malloc(sizeof(Node)));
	p->value = number;
	p->next = NULL;
	Node *last = list->head;
	if (last != NULL) {
		// find the last node
		while (last->next) {
			last = last->next;
		}
		// attach to it
		last->next = p;
	} else {
		list->head = p;
	}
}