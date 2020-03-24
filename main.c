#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "singlyLinkedList.h"

int NULLTests();
int OneNULLTests();

int main()
{
  // NULL Tests
  NULLTests();

  // 1->NULL Tests
  OneNULLTests();

  // 1->2->NULL Tests

  // 1->2->3->NULL Tests
  return 0;
}

int NULLTests()
{
  return 0;
}

int OneNULLTests()
{
  singlyLinkedListNode* head = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  head->value = 1;
  char* asString = singlyLinkedListAPI.ToString(head);
  assert(strcmp("1",asString) == 0);

  return 0;
}
