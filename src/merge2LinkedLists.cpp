/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/
#include<malloc.h>
#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
struct node *insert(struct node *first, int x);
struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	if (head1 == NULL)
		return head2;
	if (head2 == NULL)
		return head1;
	if (head1 == NULL&&head2 == NULL)
		return NULL;
	node *p, *c, *k, *head;
	k = NULL;
	p = head1;
	c = head2;
	
	while (p != NULL&&c != NULL)
	{
		if (p->num < c->num)
		{
			k = insert(k, p->num);
			p = p->next;
		}
		else{
			k = insert(k, c->num);
			c = c->next;
		}
	}
	while (c != NULL&&p==NULL)
	{
		k = insert(k, c->num);
		c = c->next;
	}
	while (p != NULL&&c == NULL)
	{
		k = insert(k, p->num);
		p = p->next;
	}
	return k;
}
struct node *insert(struct node *first, int x)
{
	struct node *t, *q;
	q = (struct node*)malloc(sizeof(node));
	q->num = x;
	q->next = NULL;
	if (first == NULL)
	{
		first = q;
		return first;
	}
	t = first;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = q;
	return first;
}


	