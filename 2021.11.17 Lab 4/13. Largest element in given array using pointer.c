// WAP to find the largest number in the given element in array using pointer.

#include <stdio.h>

int main()
{
  int arr[10], i, max;
  int *p = arr;

  printf("Enter 10 elements: ");
  for (i = 0; i < 10; i++)
    scanf("%d", p + i);

  max = *p;

  for (i = 0; i < 10; i++)
    if (max < *(p + i))
      max = *(p + i);

  printf("Max: %d", max);
  return 0;
}