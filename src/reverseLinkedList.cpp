/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	int a[100], i = 1;
	struct node *p;
	p = head;
	if (head == NULL){
		return NULL;
	}
	while (p != NULL)
	{
		a[i] = p->num;
		p = p->next;
		i++;
	}
	p = head; i--;
	while (i != 0)
	{
		p->num = a[i];
		p = p->next;
		i--;
	}
	return head;
}
