// WAP to implement Bubble Sort in C

#include <stdio.h>

void swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int main()
{
  int arr[10], i, j;

  printf("Enter 10 numbers: ");
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

  for (i = 0; i < 10; i++)
    for (j = i; j < 10; j++)
      if (arr[i] > arr[j])
        swap(arr, i, j);

  printf("Sorted array: ");
  for (i = 0; i < 10; i++)
    printf("%d ", arr[i]);

  return 0;
}