/*
Hunter Freeman

Attempt to recreate the C# class LinkedList<T> in C.
https://docs.microsoft.com/en-us/dotnet/api/system.collections.generic.linkedlist-1?view=netframework-4.8
*/

#ifndef singlyLinkedList
#define singlyLinkedList

typedef struct singlyLinkedListNode {
  int value;
  struct singlyLinkedListNode* next;
} singlyLinkedListNode;

typedef struct singlyLinkedListAPIStruct {
  singlyLinkedListNode* (* const DeleteInOrder)(singlyLinkedListNode *head, int value);
  singlyLinkedListNode* (* const InsertInOrder)(singlyLinkedListNode *head, int value);
  singlyLinkedListNode* (* const InsertAfterNode)(singlyLinkedListNode* current, int value);
  void (* const Print)(singlyLinkedListNode* head);

  // Adds the specified new node after the specified existing node in the LinkedList
  singlyLinkedListNode* (* const AddNodeAfter)(singlyLinkedListNode* current, singlyLinkedListNode* node);
  // Adds a new node containing the specified value after the specified existing node in the LinkedList
  singlyLinkedListNode* (* const AddValueAfter)(singlyLinkedListNode* current, int value);
  // Adds the specified new node before the specified existing node in the LinkedList
  singlyLinkedListNode* (* const AddNodeBefore)(singlyLinkedListNode* current, singlyLinkedListNode* node);
  // Adds a new node containing the specified value before the specified existing node in the LinkedList
  singlyLinkedListNode* (* const AddValueBefore)(singlyLinkedListNode* current, int value);

  // Adds the specified new node at the start of the LinkedList
  singlyLinkedListNode* (* const AddNodeFirst)(singlyLinkedListNode* head, singlyLinkedListNode* node);
  // Adds a new node containing the specified value at the start of the LinkedList
  singlyLinkedListNode* (* const AddValueFirst)(singlyLinkedListNode* head, int value);
  // Adds the specified new node at the end of the LinkedList
  singlyLinkedListNode* (* const AddNodeLast)(singlyLinkedListNode* head, singlyLinkedListNode* node);
  // Adds a new node containing the specified value at the end of the LinkedList
  singlyLinkedListNode* (* const AddValueLast)(singlyLinkedListNode* head, int value);

  // Removes all nodes from the LinkedList
  singlyLinkedListNode* (* const Clear)(singlyLinkedListNode* head);

  // Determines whether a value is in the LinkedList
  singlyLinkedListNode* (* const Contains)(int value);

  // Copies the entire LinkedList to a compatible one-dimensional Array, starting at the specified index of the target array
  singlyLinkedListNode* (* const CopyToArray)(singlyLinkedListNode* head, int startingIndex);

  // Determines whether the specified object is equal to the current object.
  singlyLinkedListNode* (* const Equal)(singlyLinkedListNode* headOne, singlyLinkedListNode* headTwo);

  // Returns the number of nodes actually contained in the LinkedList
  int (* const Count)(singlyLinkedListNode* head);

  // Finds the first node that contains the specified value
  singlyLinkedListNode* (* const FindFirst)(singlyLinkedListNode* head, int value);
  // Finds the last node that contains the specified value
  singlyLinkedListNode* (* const FindLast)(singlyLinkedListNode* head, int value);

  // Removes the specified node from the LinkedList
  singlyLinkedListNode* (* const RemoveNode)(singlyLinkedListNode* head, singlyLinkedListNode* node);
  // Removes the first occurrence of the specified value from the LinkedList
  singlyLinkedListNode* (* const RemoveFirst)(singlyLinkedListNode* head, int value);
  // Removes the last occurrence of the specified value from the LinkedList
  singlyLinkedListNode* (* const RemoveLast)(singlyLinkedListNode* head, int value);
  // Removes the starting (head) node;
  singlyLinkedListNode* (* const RemoveStart)(singlyLinkedListNode* head, int value);
  // Removes the ending (tail) node;
  singlyLinkedListNode* (* const RemoveEnd)(singlyLinkedListNode* head, int value);

  // Returns a string that describes the list.
  char* (* const ToString)(singlyLinkedListNode* head);
} singlyLinkedListAPIStruct;

singlyLinkedListAPIStruct const singlyLinkedListAPI;

#endif
