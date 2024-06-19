#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* create_node(int val);
void append(struct Node** head, int val);
void pop_back(struct Node** head);
void free_list(struct Node** head);
struct Node* search(struct Node* head, int val);
void push_front(struct Node** head, int val);
void insert(struct Node* node, int val);

