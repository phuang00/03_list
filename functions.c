#include "headers.h"

void print_list(struct node *n){
  printf("[ ");
  while (n != 0){
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
  struct node *temp;
  while (n != 0){
    printf("freeing node: %d\n", n->i);
    free(n);
    temp = n->next;
    n = temp;
  }
  return temp;
}

struct node * remove1(struct node *front, int data){
  struct node *first;
  first = front;
  struct node *temp;
  while (front->next != 0 && front->i != data){
    temp = front;
    front = front->next;
  }
  if (first == front){
    first = front->next;
  }
  else if (first->next != 0){
    temp->next = front->next;
  }
  free(front);
  return first;
}
