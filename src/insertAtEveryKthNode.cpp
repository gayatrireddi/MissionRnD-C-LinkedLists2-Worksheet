/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
		struct node *n = head; int c = 1;
		if (head == NULL || K < 1)
			return NULL;
		while (n != NULL)
		{
			if (c == K)
			{
				struct node *k = (struct node*)malloc(sizeof(node));
				k->num = K;
				k->next = n->next;
				n->next = k;
				n = n->next;
				c = 0;
			}
			n = n->next;
			c++;
		}
		return head;
	}
