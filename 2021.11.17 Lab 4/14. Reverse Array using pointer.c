// WAP to reverse the elements of an array using pointer

#include <stdio.h>

int main()
{
  int arr[10], i;
  int *ptr = arr;

  printf("Enter 10 elements: ");
  for (i = 0; i < 10; i++)
    scanf("%d", ptr + i);

  printf("Reverse Array: ");
  for (i = 9; i >= 0; i--)
    printf("%d ", *(ptr + i));

  return 0;
}