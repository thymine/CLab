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

	/* 遍历打印链表值 */
	print(&list);

	/* 查找元素 */
	int target;
	scanf("%d", &target);
	find(&list, target);

	/* 删除节点 */
	delete(&list, target);
	print(&list);

	/* 清空链表 */
	printf("Clear List\n");
	clear(&list);
	// print(&list);

	return 0;
}

void clear(List *list)
{
	Node *p, *q;
	for (p = list->head; p; p = q) {
		q = p->next;
		printf("free\t");
		free(p);
		p = NULL;
	}
	printf("\n");
}

void delete(List *list, int target)
{
	Node *p, *q;
	for (q = NULL, p = list->head; p; q = p, p = p->next) {
		if (p->value == target) {
			if (q != NULL) { 
				q->next = p->next;
			} else { // q为NULL，表示第一个节点需要删除，head需要指向第二个节点
				list->head = p->next;
			}
			free(p);
			p = NULL;
			break;
		}
	}
}

void find(List *list, int target) 
{
	int isFound = 0;
	Node *p;
	for (p = list->head; p; p = p->next) {
		if (p->value == target) {
			printf("Found!\n");
			isFound = 1;
			break;
		}
	}
	if (!isFound) {
		printf("Not found!\n");
	}
}

void print(List *list)
{
	Node *p;
	for (p = list->head; p; p = p->next) {
		printf("%d\t", p->value);
	}
	printf("\n");
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