/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	struct node* n = head; int num; int c = 0, k;
	if (head == NULL)
		return -1;

	while (n != NULL)
	{
		c++;
		n = n->next;
	}
	n = head;
	k = 1;
	if (c % 2 == 0)
	{
		while (n != NULL)
		{
			if (k == (c / 2))
			{
				return ((n->num + (n->next->num)) / 2);
			}
			n = n->next;
			k++;
		}
	}
	else
	{
		while (n != NULL)
		{
			if (k == (c / 2) + 1)
			{

				return (n->num);
			}
			n = n->next;
			k++;
		}
	}
}
