#include "list.h"

void append(struct Node** head, int val)
{
    struct Node* node = create_node(val);
    if (*head == NULL)
    {
         *head = node;
         return;
    }
 
    struct Node* tmp = *head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = node;
}

