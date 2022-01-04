#include <stdio.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
};

struct node *createCircularLinkedList()
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
    }
    newNode->next = head;
  }
  return head;
}

struct node *insertBeginCircularLinkedList(struct node *head, int value)
{
  struct node *newNode = malloc(sizeof(struct node)), *ptr = head;
  newNode->data = value;
  while (ptr->next != head)
    ptr = ptr->next;
  ptr->next = newNode;
  newNode->next = head;
  return newNode;
}

struct node *insertEndCircularLinkedList(struct node *head, int value)
{
  struct node *newNode = malloc(sizeof(struct node)), *ptr = head;
  newNode->data = value;
  while (ptr->next != head)
    ptr = ptr->next;
  ptr->next = newNode;
  newNode->next = head;
  return head;
}

void insertAtPositionCircularLinkedList(struct node *head, int value, int position)
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
  ptr->next = newNode;
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
  head = insertBeginCircularLinkedList(head, 11);
  head = insertEndCircularLinkedList(head, 12);
  insertAtPositionCircularLinkedList(head, 13, 3);
  printCircularLinkedList(head);
  return 0;
}