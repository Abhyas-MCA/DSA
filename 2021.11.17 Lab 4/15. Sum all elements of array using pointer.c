// WAP to find sum of all the elements of an array using pointer.

#include <stdio.h>

int main()
{
  int arr[10], i, sum = 0;
  int *p = arr;

  printf("Enter 10 elements: ");
  for (i = 0; i < 10; i++)
    scanf("%d", p + i);

  for (i = 0; i < 10; i++)
    sum += *(p + i);

  printf("Sum: %d", sum);
  return 0;
}