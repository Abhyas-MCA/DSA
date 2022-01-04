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

struct node *insertAtPositionCircularLinkedList(struct node *head, int position)
{
  struct node *newNode = malloc(sizeof(struct node)), *ptr = head;
  int i, position;
  printf("Enter value and position: ");
  scanf("%d %d", &newNode->data, &position);
  if (position == 1)
  {
    newNode->next = head;
    newNode->prev = ptr;
    head->prev = newNode;
    head = newNode;
  }
  else
  {
    for (i = 1; i < position; i++)
      ptr = ptr->next;
    newNode->next = ptr->next;
    newNode->prev = ptr;
    ptr->next->prev = newNode;
    ptr->next = newNode;
  }
  return head;
}

struct node *deleteBeginCircularLinkedList(struct node *head)
{
  printf("Deleting begin\n");
  struct node *ptr = head;
  while (ptr->next != head)
    ptr = ptr->next;
  ptr->next = head->next;
  head->next->prev = ptr;
  free(head);
  return ptr->next;
}

struct node *deleteEndCircularLinkedList(struct node *head)
{
  printf("Deleting end\n");
  struct node *ptr = head;
  while (ptr->next != head)
    ptr = ptr->next;
  ptr->next = head->next;
  head->next->prev = ptr;
  free(head);
  return ptr;
}

struct node *deleteAtPositionCircularLinkedList(struct node *head)
{
  struct node *ptr = head;
  int i = 1, position;
  printf("Enter position for delete: ");
  scanf("%d", &position);
  while (i < position - 1)
  {
    ptr = ptr->next;
    i++;
  }
  ptr->next = ptr->next->next;
  ptr->next->next->prev = ptr;
  free(ptr->next);
  return head;
}

void printCircularLinkedList(struct node *head)
{
  struct node *ptr = head;
  do
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  } while (ptr != head);
  printf("\n");
}

int main()
{
  struct node *head = createCircularLinkedList();
  head = insertBeginCircularLinkedList(head);
  head = insertEndCircularLinkedList(head);
  head = insertAtPositionCircularLinkedList(head);
  printCircularLinkedList(head);
  return 0;
}