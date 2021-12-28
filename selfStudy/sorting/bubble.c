// 2:04
// 1:53

#include <stdio.h>

void bubbleSort(int arr[], int n)
{
  int pass, i, temp;
  for (pass = n - 1; pass >= 0; pass--)
    for (i = 0; i < pass; i++)
      if (arr[i] > arr[i + 1])
      {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
}

int main()
{
  int arr[] = {9, 6, 3, 5, 8, 7}, n = sizeof(arr) / sizeof(arr[0]), i;
  bubbleSort(arr, n);
  printf("Sorted: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}