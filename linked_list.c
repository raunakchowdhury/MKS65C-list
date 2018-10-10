#include "linked_list.h"

void print_list(struct node *node_pointer){
  struct node *current_pointer = node_pointer;
  while (current_pointer != NULL){
    printf("%d -> ", current_pointer -> num);
    current_pointer = current_pointer -> next;
  }
  printf("END \n");
}

struct node * insert_front(struct node *node_pointer, int num){
  struct node *new_start_pointer = calloc(1,sizeof(struct node));
  new_start_pointer -> num = num;
  new_start_pointer -> next = node_pointer;
  return new_start_pointer;
}

struct node * free_list(struct node *node_pointer){
  struct node *current_pointer = node_pointer;
  struct node *placeholder = node_pointer;
  while (current_pointer){
    free(placeholder);
    current_pointer = current_pointer -> next;
    placeholder = current_pointer;
  }
  return current_pointer;
}
