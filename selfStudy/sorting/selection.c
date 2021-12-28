// 2:09
// 1:53
#include <stdio.h>

void selectionSort(int arr[], int n)
{
  int i, j, min, temp;
  for (i = 0; i < n; i++)
  {
    min = i;
    for (j = i; j < n; j++)
    {
      if (arr[min] > arr[j])
        min = j;
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}

int main()
{
  int arr[] = {9, 6, 3, 5, 8, 7}, n = sizeof(arr) / sizeof(arr[0]), i;

  selectionSort(arr, n);

  printf("Sorted: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}