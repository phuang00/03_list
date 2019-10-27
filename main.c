#include "headers.h"

int main() {
  struct node *list = 0;

  printf("Printing empty list:\n");
  print_list(list);

  printf("Adding #s 0-9 to list.\n");
  int i = 0;
  for (i = 0; i < 10; i++){
    printf("Adding node: %d\n", i);
    list = insert_front(list, i);
    print_list(list);
  }

  printf("Printing list:\n");
  print_list(list);

  printf("Freeing list.\n");
  list = free_list(list);

  printf("Printing list:\n");
  print_list(list);

  printf("Adding #s 10-19 to list.\n");
  for (i = 10; i < 20; i++){
    list = insert_front(list, i);
  }

  printf("Printing list:\n");
  print_list(list);

  printf("Removing # 10 from list.\n");
  list = remove_node(list, 10);
  print_list(list);

  printf("Removing # 19 from list.\n");
  list = remove_node(list, 19);
  print_list(list);

  printf("Removing #12-17 from list.\n");
  for (i = 12; i <= 17; i++){
    printf("Removing %d\n", i);
    list = remove_node(list, i);
    print_list(list);
  }

  printf("Printing list:\n");
  print_list(list);

  printf("Freeing the remainder of the list.\n");
  list = free_list(list);

  printf("Printing list:\n");
  print_list(list);

  printf("Freeing empty list\n");
  list = free_list(list);

  printf("Printing list:\n");
  print_list(list);

  return 0;
}
