#include "linked_list.h"

int main(){
  //set up sample notes for testing
  struct node *node_pointer1 = calloc(1,sizeof(struct node)); //1 * size of node
  node_pointer1 -> num = 1;
  struct node *node_pointer2 = calloc(1,sizeof(struct node)); //1 * size of node
  node_pointer2 -> num = 2;
  struct node *node_pointer3 = calloc(1,sizeof(struct node)); //1 * size of node
  node_pointer3 -> num = 3;
  node_pointer1 -> next = node_pointer2;
  node_pointer2 -> next = node_pointer3;

  struct node *start_pointer = node_pointer1;

  printf("Printing Linked List:\n");
  print_list(start_pointer);
  printf("Adding 4 to front:\n");
  start_pointer = insert_front(start_pointer, 4);
  print_list(start_pointer);

  printf("Clearing the list:\n");
  start_pointer = free_list(start_pointer);
  printf("%d\n", start_pointer -> num);

  return 0;
}
