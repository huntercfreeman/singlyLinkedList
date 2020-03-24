#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "singlyLinkedList.h"

int main()
{
  // NULL Tests
  singlyLinkedListNode* head = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  head->value = 10;
  char* asString = singlyLinkedListAPI.ToString(head);
  assert(strcmp("10",asString) == 0);

  return 0;
}
