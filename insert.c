#include "list.h"

void insert(struct Node* node, int val)
{
	struct Node* new_node = create_node(val);
	if(node == NULL)
	{
		node = new_node;
	}
	else
	{
		new_node->next = node->next;
		node->next = new_node;
	}
	
}
