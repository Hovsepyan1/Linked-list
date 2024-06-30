#include "list.h"
void pop_back(struct Node** head)
{
     if (*head == NULL)
     {
	printf("There is no element to pop");
     }
     else if((*head)->next == NULL)
     {
	free(*head);
	*head = NULL;
	return;
     }
 
     struct Node* tmp = *head;
     struct Node* prev = tmp;
 
     while (tmp->next)
     {
         prev = tmp;
         tmp = tmp->next;
     }
 
     free(tmp);
     prev->next = NULL;
}

