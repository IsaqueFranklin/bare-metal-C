#include "linkedlist.h"

struct Node_int * create_node_int(void);
void destroy_node_int(struct Node_int *node_to_destroy);

struct Node_int * iterate(int index, struct LinkedList_int *linked_list);

void insert_node_int(int data, struct LinkedList_int *linked_list);
void remove_node_int(int index, struct LinkedList_int *linked_list);
int retrieve_data_int(int index, struct LinkedList_int *linked_list);

struct LinkedList_int linked_list_int_constructor() {
  struct LinkedList_int new_list;
  new_list.head = NULL:
  new_list.length = 0;

  new_list.insert = insert_node_int;
  new_list.remove = remove_node_int;
  new_list.retrieve = retrieve_data_int;
  new_list.constructor = linked_list_int_constructor;

  return new_list;
}

struct Node_int * create_node_int(int data) {
  struct Node_int *new_node_address; = (struct Node_int *)malloc(sizeof(struct Node_int));
  struct Node_int new_node_instance;
  new_node_instance.data = data;
  new_node_instance.next = NULL:
  *new_node_address = new_node_instance;

  return new_node_address;
}

void destroy_node_int(struct Node_int *note_to_destroy) {
  free(node_to_destroy);
}

struct Node_int * iterate(int index, struct LinkedList_int *linkedlist) {
  if (index < 0 || index >= linked_list->length){
    printf("Index out of bound...")
    exit(9);
  }
}
