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
  singlyLinkedListNode* temporary1 = NULL;
  singlyLinkedListNode* temporary2 = NULL;
  char* asString = NULL;

  // InsertInOrder
  temporary1 = singlyLinkedListAPI.InsertInOrder(NULL, 1);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  // AddNodeAfter
  temporary2 = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary2->value = 5;
  temporary2->next = NULL;
  temporary1 = singlyLinkedListAPI.AddNodeAfter(NULL, temporary2);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);
  free(temporary2);
  temporary2 = NULL;

  // AddValueAfter
  temporary1 = singlyLinkedListAPI.AddValueAfter(NULL, 10);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  // AddNodeStart
  temporary2 = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary2->value = 5;
  temporary2->next = NULL;
  temporary1 = singlyLinkedListAPI.AddNodeStart(NULL, temporary2);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("5", asString) == 0);
  free(temporary2);
  temporary2 = NULL;

  // AddValueStart
  temporary1 = singlyLinkedListAPI.AddValueStart(NULL, 10);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("10", asString) == 0);

  // AddNodeEnd
  temporary2 = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary2->value = 5;
  temporary2->next = NULL;
  temporary1 = singlyLinkedListAPI.AddNodeEnd(NULL, temporary2);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);
  free(temporary2);
  temporary2 = NULL;

  // AddValueEnd
  temporary1 = singlyLinkedListAPI.AddValueEnd(NULL, 10);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  return 0;
}

int OneNULLTests()
{
  singlyLinkedListNode* head = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  head->value = 1;
  head->next = NULL;
  char* asString = singlyLinkedListAPI.ToString(head);
  assert(strcmp("1",asString) == 0);

  return 0;
}
