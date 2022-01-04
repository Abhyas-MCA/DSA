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

struct node *insertBeginDoublyLinkedList(struct node *head)
{
  struct node *newNode = malloc(sizeof(struct node)), *ptr = head;
  printf("Enter value for begin: ");
  scanf("%d", &newNode->data);
  while (ptr->next != head)
    ptr = ptr->next;
  ptr->next = newNode;
  newNode->next = head;
  newNode->prev = ptr;
  head->prev = newNode;
  return newNode;
}

struct node *insertEndDoublyLinkedList(struct node *head)
{
  struct node *newNode = malloc(sizeof(struct node)), *ptr = head;
  printf("Enter value for end: ");
  scanf("%d", &newNode->data);
  while (ptr->next != head)
    ptr = ptr->next;
  ptr->next = newNode;
  newNode->next = head;
  newNode->prev = ptr;
  head->prev = newNode;
  return head;
}

void insertAtPositionDoublyLinkedList(struct node *head)
{
  int i, position;
  struct node *newNode = malloc(sizeof(struct node)), *ptr = head;
  printf("Enter position and value: ");
  scanf("%d %d", &position, &newNode->data);
  int i = 1;
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
  head = insertBeginDoublyLinkedList(head);
  head = insertEndDoublyLinkedList(head);
  insertAtPositionDoublyLinkedList(head);
  printDoublyLinkedList(head);
  return 0;
}
