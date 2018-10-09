#include <stdlib.h>
#include <stdio.h>

struct node { int num; struct node *next; };

void print_list(struct node *node_pointer);

struct node * insert_front(struct node *node_pointer, int num);

struct node * free_list(struct node *node_pointer);
