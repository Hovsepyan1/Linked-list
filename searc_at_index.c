#include "list.h"

struct Node* search(struct Node* head, int val)
{
	if(head == NULL)
	{
		return NULL;
	}
	struct Node* tmp = head;

	while(tmp != NULL)
	{
		if(tmp->data == val)
		{
			return tmp;
		}

		tmp = tmp->next;
	}

	return NULL;
}
