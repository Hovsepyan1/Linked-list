#include "list.h"
void free_list(struct Node** head)
{
    if(*head == NULL)
    {
	return;
    }
    struct Node* tmp = *head;
    struct Node* next = tmp;
    while (tmp->next != NULL)
    {
        next = tmp->next;
        free(tmp);
	tmp = next;
    }

}

