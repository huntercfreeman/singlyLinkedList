#include <stdio.h>
#include <stdlib.h>
#include "singlyLinkedList.h"

int main()
{
  printf("Begin the list with 5\n");
  singlyLinkedListNode* head = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  head->value = 5;
  head->next = NULL;
  singlyLinkedListAPI.Print(head);

  printf("Insert 10 after 5\n");
  head = singlyLinkedListAPI.InsertAfterNode(head, 10);
  singlyLinkedListAPI.Print(head);

  printf("Insert in order 7\n");
  head = singlyLinkedListAPI.InsertInOrder(head, 7);
  singlyLinkedListAPI.Print(head);

  printf("Delete in order 6\n");
  head = singlyLinkedListAPI.DeleteInOrder(head, 6);
  singlyLinkedListAPI.Print(head);

  printf("Delete in order 10\n");
  head = singlyLinkedListAPI.DeleteInOrder(head, 10);
  singlyLinkedListAPI.Print(head);

  printf("Delete in order 5\n");
  head = singlyLinkedListAPI.DeleteInOrder(head, 5);
  singlyLinkedListAPI.Print(head);

  printf("Delete in order 7\n");
  head = singlyLinkedListAPI.DeleteInOrder(head, 7);
  singlyLinkedListAPI.Print(head);

  return 0;
}
