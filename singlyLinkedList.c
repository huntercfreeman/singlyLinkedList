#include <stdio.h>
#include <stdlib.h>
#include "singlyLinkedList.h"

static singlyLinkedListNode* AddNodeAfter(singlyLinkedListNode* current, singlyLinkedListNode* node)
{
  if(current == NULL) return NULL;

  node->next = current->next;

  current->next = node;

  return current;
}

static singlyLinkedListNode* AddValueAfter(singlyLinkedListNode* current, int value)
{
  if(current == NULL) return NULL;

  singlyLinkedListNode* temporary = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary->next = current->next;
  temporary->value = value;

  current->next = temporary;

  return current;
}

// not possible with singlyLinkedList
static singlyLinkedListNode* AddNodeBefore(singlyLinkedListNode* current, singlyLinkedListNode* node)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return current;
}

// not possible with singlyLinkedList
static singlyLinkedListNode* AddValueBefore(singlyLinkedListNode* current, int value)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return current;
}

static singlyLinkedListNode* AddNodeFirst(singlyLinkedListNode* head, singlyLinkedListNode* node)
{
  node->next = head;

  return node;
}

static singlyLinkedListNode* AddValueFirst(singlyLinkedListNode* head, int value)
{
  singlyLinkedListNode* temporary = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary->value = value;
  temporary->next = head;

  return temporary;
}

static singlyLinkedListNode* AddNodeLast(singlyLinkedListNode* head, singlyLinkedListNode* node)
{
  if(head == NULL) return NULL;

  if(head->next == NULL)
  {
    node->next = NULL;

    head->next = node;

    return head;
  }

  singlyLinkedListNode* currentNode = head;
  while(currentNode->next != NULL)
  {
    currentNode = currentNode->next;
  }

  node->next = NULL;

  currentNode->next = node;

  return head;
}

static singlyLinkedListNode* AddValueLast(singlyLinkedListNode* head, int value)
{
  if(head == NULL) return NULL;

  if(head->next == NULL)
  {
    singlyLinkedListNode* temporary = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
    temporary->value = value;
    temporary->next = NULL;

    head->next = temporary;

    return head;
  }

  singlyLinkedListNode* currentNode = head;
  while(currentNode->next != NULL)
  {
    currentNode = currentNode->next;
  }

  singlyLinkedListNode* temporary = (singlyLinkedListNode*)malloc(sizeof(singlyLinkedListNode));
  temporary->value = value;
  temporary->next = NULL;

  currentNode->next = temporary;

  return head;
}

static singlyLinkedListNode* Clear(singlyLinkedListNode* head)
{
  if(head == NULL) return NULL;

  if(head->next == NULL)
  {
    free(head);
    head = NULL;

    return NULL;
  }

  singlyLinkedListNode* temporary1 = head;
  singlyLinkedListNode* temporary2 = head->next;
  free(temporary1);
  temporary1 = NULL;

  while(temporary2->next != NULL)
  {
    temporary1 = temporary2;
    temporary2 = temporary1->next;
    free(temporary1);
    temporary1 = NULL;
  }

  free(temporary2);
  temporary2 = NULL;

  return NULL;
}

static int Contains(singlyLinkedListNode* head, int value)
{
  if(head == NULL) return 0;

  if(head->value == value) return 1;

  singlyLinkedListNode* temporary = head;
  while(temporary->next != NULL)
  {
    temporary = temporay->next;

    if(temporary->value == value) return 1;
  }

  return 0;
}

static singlyLinkedListNode* CopyToArray(singlyLinkedListNode* head, int startingIndex)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return NULL;
}

static int Equal(singlyLinkedListNode* headOne, singlyLinkedListNode* headTwo)
{
  if((headOne == NULL) && (headTwo == NULL)) return 1;
  if((headOne == NULL) || (headTwo == NULL)) return 0;

  int equivalence = 1;

  singlyLinkedListNode* temporary1 = headOne;
  singlyLinkedListNode* temporary2 = headTwo;

  if(temporary1->value != temporary2->value) equivalence = 0;

  while(equivalence && (temporary1->next != NULL) && (temporary2->next != NULL))
  {
    temporary1 = temporary1->next;
    temporary2 = temporary2->next;

    if(temporary1->value != temporary2->value) equivalence = 0;
  }

  if(equivalence != 0)
  {
    if((temporary1->next == NULL) && (temporary2->next == NULL)) return 1;
    if((temporary1->next == NULL) || (temporary2->next == NULL)) return 0;
  }
  
  return equivalence;
}

static int Count(singlyLinkedListNode* head)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return 0;
}

static singlyLinkedListNode* FindFirst(singlyLinkedListNode* head, int value)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return NULL;
}

static singlyLinkedListNode* FindLast(singlyLinkedListNode* head, int value)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return NULL;
}

static singlyLinkedListNode* RemoveNode(singlyLinkedListNode* head, singlyLinkedListNode* node)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return NULL;
}

static singlyLinkedListNode* RemoveFirst(singlyLinkedListNode* head, int value)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return NULL;
}

static singlyLinkedListNode* RemoveLast(singlyLinkedListNode* head, int value)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return NULL;
}

static singlyLinkedListNode* RemoveStart(singlyLinkedListNode* head, int value)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return NULL;
}

static singlyLinkedListNode* RemoveEnd(singlyLinkedListNode* head, int value)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return NULL;
}

static char* ToString(singlyLinkedListNode* head)
{
  fprintf(stderr, "ERROR in file %s line:%d %s is not implemented do not use\n", __FILE__, __LINE__, __FUNCTION__);
  return NULL;
}

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
  InsertAfterNode, Print, AddNodeAfter, AddValueAfter, AddNodeBefore, AddValueBefore,
AddNodeFirst, AddValueFirst, AddNodeLast, AddValueLast, Clear, Contains, CopyToArray,
Equal, Count, FindFirst, FindLast, RemoveNode, RemoveFirst, RemoveLast, RemoveStart,
RemoveEnd, ToString};
