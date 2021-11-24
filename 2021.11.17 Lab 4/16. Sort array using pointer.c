// WAP to sort the number in ascending order using pointer

#include <stdio.h>

int main()
{
  int arr[10], i, j, temp;
  int *p = arr;

  printf("Enter 10 elements: ");
  for (i = 0; i < 10; i++)
    scanf("%d", p + i);

  for (i = 0; i < 10; i++)
    for (j = i; j < 10; j++)
      if (*(p + i) > *(p + j))
      {
        temp = *(p + i);
        *(p + i) = *(p + j);
        *(p + j) = temp;
      }

  printf("Sorted Array: ");
  for (i = 0; i < 10; i++)
    printf("%d ", *(p + i));

  return 0;
}