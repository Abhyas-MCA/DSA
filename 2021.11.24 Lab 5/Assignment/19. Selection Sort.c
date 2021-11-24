// WAP to implement selection sort in C

#include <stdio.h>

int main()
{
  int arr[10], i, j, min, temp;

  printf("Enter 10 elements: ");
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

  for (i = 0; i < 10; i++)
  {
    min = i;
    for (j = i + 1; j < 10; j++)
      if (arr[j] < arr[min])
        min = j;

    temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }

  printf("Sorted array: ");
  for (i = 0; i < 10; i++)
    printf("%d ", arr[i]);
  return 0;
}