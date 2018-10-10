#include "linked_list.h"

int main(){
  //set up sample notes for testing
  struct node *start_pointer = NULL; //1 * size of node

  start_pointer = insert_front(start_pointer,1);
  start_pointer = insert_front(start_pointer,2);
  start_pointer = insert_front(start_pointer,3);

  printf("Printing Linked List:\n");
  print_list(start_pointer);
  printf("Adding 4 to front:\n");
  start_pointer = insert_front(start_pointer, 4);
  print_list(start_pointer);

  printf("Clearing the list:\n");
  start_pointer = free_list(start_pointer);
  print_list(start_pointer);

  return 0;
}
