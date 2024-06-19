#include "list.h"

struct Node* create_node(int val)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = val;
    new_node->next = NULL;
    return new_node;
}
