#include "headers.h"

void print_list(struct node *n){
  printf("[ ");
  while (n != NULL){
    printf("%d ", n->i);
    n = n->next;
  }
  printf("]\n");
}

struct node * insert_front(struct node *n, int x){
  struct node *first = malloc(sizeof(struct node));
  first->i = x;
  first->next = n;
  return first;
}

struct node * free_list(struct node *n){
  struct node *temp = n;
  while (n != NULL){
    //printf("freeing node: %d\n", n->i);
    temp = n->next;
    free(n);
    n = temp;
  }
  return temp;
}

struct node * remove_node(struct node *front, int data){
  struct node *first = front;
  struct node *temp;
  while (front != NULL){
    if (front->i == data){
      if (first == front){
        first = front->next;

      }
      else{
        temp->next = front->next;
      }
      free(front);
      return first;
    }
    temp = front;
    front = front->next;
  }
  return first;
}
