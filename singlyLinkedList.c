#include <stdio.h>
#include <stdlib.h>
#include "singlyLinkedList.h"

static singlyLinkedListNode* DeleteInOrder(singlyLinkedListNode *head, int value)
{
  if(head == NULL) return NULL;

  if(head->value == value)
  {
    singlyLinkedListNode *temporary = head->next;
    free(head);
    head = NULL;

    return temporary;
  }

  singlyLinkedListNode* temporary = head;
  while(temporary->next != NULL)
  {
    if(temporary->next->value == value)
    {
        temporary->next = temporary->next->next;
        return head;
    }
    temporary = temporary->next;
  }

  return head;
}

static singlyLinkedListNode* InsertInOrder(singlyLinkedListNode *head, int value)
{
  if(head == NULL) return NULL;

  if(head->value >= value)
  {
    singlyLinkedListNode* temporary = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
    temporary->next = head;
    temporary->value = value;

    return temporary;
  }

  singlyLinkedListNode* temporary = head;
  while((temporary->next != NULL) && (temporary->next->value < value))
  {
    temporary = temporary->next;
  }

  singlyLinkedListNode* newNode = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  newNode->next = temporary->next;
  newNode->value = value;

  temporary->next = newNode;

  return head;
}

static singlyLinkedListNode* InsertAfterNode(singlyLinkedListNode* current, int value)
{
  if(current == NULL) return NULL;

  singlyLinkedListNode* temporary = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary->next = current->next;
  temporary->value = value;

  current->next = temporary;

  return current;
}

static void Print(singlyLinkedListNode* head)
{
  if(head == NULL) return;

  printf("%d", head->value);
  singlyLinkedListNode* current = head;
  while(current->next != NULL)
  {
    current = current->next;
    printf("->%d", current->value);
  }
  printf("\n");
}

singlyLinkedListAPIStruct const singlyLinkedListAPI =
{DeleteInOrder, InsertInOrder,
  InsertAfterNode, Print};
