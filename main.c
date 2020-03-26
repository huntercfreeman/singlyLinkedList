#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "singlyLinkedList.h"

int NULLTests();
int OneNULLTests();
int OneTwoNULLTests();
int OneTwoThreeNULLTests();

int main()
{
  // NULL Tests
  NULLTests();

  // 1->NULL Tests
  OneNULLTests();

  // 1->2->NULL Tests
  OneTwoNULLTests();

  // 1->2->3->NULL Tests
  OneTwoThreeNULLTests();

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

  // Clear
  temporary1 = singlyLinkedListAPI.Clear(NULL);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  // Contains
  int contains = singlyLinkedListAPI.Contains(NULL, 5);
  assert(0 == contains);

  // Equal
  int equal = singlyLinkedListAPI.Equal(NULL, NULL);
  assert(1 == equal);

  // Count
  int count = singlyLinkedListAPI.Count(NULL);
  assert(0 == count);

  // FindFirst
  temporary1 = singlyLinkedListAPI.FindFirst(NULL, 5);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  // FindLast
  temporary1 = singlyLinkedListAPI.FindLast(NULL, 5);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  // RemoveNode
  temporary1 = singlyLinkedListAPI.RemoveNode(NULL, NULL, NULL);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  // RemoveFirst
  temporary1 = singlyLinkedListAPI.RemoveFirst(NULL, 5);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  // RemoveLast
  temporary1 = singlyLinkedListAPI.RemoveLast(NULL, 5);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  // RemoveStart
  temporary1 = singlyLinkedListAPI.RemoveStart(NULL);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  // RemoveEnd
  temporary1 = singlyLinkedListAPI.RemoveEnd(NULL);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);

  return 0;
}

int OneNULLTests()
{
  singlyLinkedListNode* head = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  head->value = 1;
  head->next = NULL;
  singlyLinkedListNode* temporary1;
  singlyLinkedListNode* temporary2;
  char* asString;
  int booleanReturnValue;

  // InsertInOrder
  temporary1 = singlyLinkedListAPI.InsertInOrder(head, 10);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("1->10",asString) == 0);
  free(temporary1->next);
  head->next = NULL;

  // InsertInOrder
  temporary1 = singlyLinkedListAPI.InsertInOrder(head, -2);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("-2->1",asString) == 0);
  free(temporary1);
  head->next = NULL;

  // AddNodeAfter
  temporary2 = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary2->value = 5;
  temporary2->next = NULL;
  temporary1 = singlyLinkedListAPI.AddNodeAfter(head, temporary2);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("1->5",asString) == 0);
  free(temporary1->next);
  head->next = NULL;

  // AddValueAfter
  temporary1 = singlyLinkedListAPI.AddValueAfter(head, 4);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("1->4",asString) == 0);
  free(temporary1->next);
  head->next = NULL;

  // AddNodeStart
  temporary2 = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary2->value = 154;
  temporary2->next = NULL;
  temporary1 = singlyLinkedListAPI.AddNodeStart(head, temporary2);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("154->1",asString) == 0);
  free(temporary1);
  head->next = NULL;

  // AddValueStart
  temporary2 = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary2->value = 154;
  temporary2->next = NULL;
  temporary1 = singlyLinkedListAPI.AddNodeStart(head, temporary2);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("154->1",asString) == 0);
  free(temporary1);
  head->next = NULL;

  // AddNodeEnd
  temporary2 = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary2->value = 3;
  temporary2->next = NULL;
  temporary1 = singlyLinkedListAPI.AddNodeEnd(head, temporary2);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("1->3",asString) == 0);
  free(temporary1->next);
  head->next = NULL;

  // AddValueEnd
  temporary1 = singlyLinkedListAPI.AddValueEnd(head, 1);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(strcmp("1->1",asString) == 0);
  free(temporary1->next);
  head->next = NULL;

  // Clear
  temporary1 = singlyLinkedListAPI.Clear(head);
  asString = singlyLinkedListAPI.ToString(temporary1);
  assert(NULL == asString);
  head = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  head->value = 1;
  head->next = NULL;

  // Contains
  booleanReturnValue = singlyLinkedListAPI.Contains(head, 1);
  assert(1 == booleanReturnValue);

  // Contains
  booleanReturnValue = singlyLinkedListAPI.Contains(head, 2);
  assert(0 == booleanReturnValue);

  // Equal
  booleanReturnValue = singlyLinkedListAPI.Equal(head, head);
  assert(booleanReturnValue == 1);

  // Equal
  temporary2 = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary2->value = 3;
  temporary2->next = NULL;
  booleanReturnValue = singlyLinkedListAPI.Equal(head, temporary2);
  assert(booleanReturnValue == 0);

  // Count
  int count = singlyLinkedListAPI.Count(head);
  assert(1 == count);

  return 0;
}

int OneTwoNULLTests()
{
  return 0;
}

int OneTwoThreeNULLTests()
{
  return 0;
}
