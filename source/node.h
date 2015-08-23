#ifndef _NODE_H_
#define _NODE_H_ 

typedef struct _node
{
	int value;
	struct _node *next;
} Node;

typedef struct _list
{
	Node *head;
	Node *tail;
} List;

/* 添加节点到链表末尾 */
void add(List *list, int number);

/* 遍历打印链表值 */
void print(List *list);

#endif