#include <stdio.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

struct node *createDoublyLinkedList()
{
  int i, input;
  struct node *newNode, *head = NULL, *ptr;
  printf("Enter 10 elements: ");
  for (i = 1; i <= 10; i++)
  {
    newNode = malloc(sizeof(struct node));
    scanf("%d", &newNode->data);
    if (head == NULL)
      head = newNode;
    else
    {
      ptr = head;
      while (ptr->next != head)
        ptr = ptr->next;
      ptr->next = newNode;
      newNode->prev = ptr;
    }
    newNode->next = head;
  }
  return head;
}

struct node *insertBeginDoublyLinkedList(struct node *head, int value)
{
  struct node *newNode = malloc(sizeof(struct node)), *ptr = head;
  newNode->data = value;
  while (ptr->next != head)
    ptr = ptr->next;
  ptr->next = newNode;
  newNode->next = head;
  newNode->prev = ptr;
  head->prev = newNode;
  return newNode;
}

struct node *insertEndDoublyLinkedList(struct node *head, int value)
{
  struct node *newNode = malloc(sizeof(struct node)), *ptr = head;
  newNode->data = value;
  while (ptr->next != head)
    ptr = ptr->next;
  ptr->next = newNode;
  newNode->next = head;
  newNode->prev = ptr;
  head->prev = newNode;
  return head;
}

void insertAtPositionDoublyLinkedList(struct node *head, int value, int position)
{
  struct node *newNode = malloc(sizeof(struct node)), *ptr = head;
  int i = 1;
  newNode->data = value;
  while (i < position - 1)
  {
    ptr = ptr->next;
    i++;
  }
  newNode->next = ptr->next;
  newNode->prev = ptr;
  ptr->next = newNode;
  newNode->next->prev = newNode;
}

void printDoublyLinkedList(struct node *head)
{
  struct node *ptr = head;
  do
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  } while (ptr != head);
}

int main()
{
  struct node *head = createDoublyLinkedList();
  head = insertBeginDoublyLinkedList(head, 9);
  head = insertEndDoublyLinkedList(head, 6);
  insertAtPositionDoublyLinkedList(head, 6, 3);
  printDoublyLinkedList(head);
  return 0;
}
