// 3:20
// 1:35
#include <stdio.h>

void insertionSort(int arr[], int n)
{
  int i, j, key;
  for (i = 0; i < n - 1; i++)
  {
    j = i;
    key = arr[i];
    while (j > 0 && arr[j - 1] > key)
    {
      arr[j] = arr[j - 1];
      j--;
    }
    arr[j] = key;
  }
}

int main()
{
  int arr[] = {9, 6, 3, 5, 8, 7}, n = sizeof(arr) / sizeof(arr[0]), i;

  insertionSort(arr, n);

  printf("Sorted Array: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}