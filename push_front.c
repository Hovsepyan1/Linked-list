#include "list.h"

void push_front(struct Node** head, int val)
{
	struct Node* new_node = create_node(val);

	if(*head == NULL)
	{
		*head = new_node;
	}


	new_node->next = *head;
	*head = new_node;
}
