#include "headers.h"

void print_list(struct node *n){
  printf("[ ");
  while (n->next != '\0'){
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
  struct node *temp = malloc(sizeof(struct node));
  while (n->next != '\0'){
    printf("freeing node: %d\n", n->i);
    temp = n->next;
    free(n);
    n = temp;
  }
  return temp;
}
