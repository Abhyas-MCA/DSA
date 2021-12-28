#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int partition(int arr[], int lb, int ub)
{
  int start = lb;
  int end = ub;
  int pivot = arr[start];
  while (start < end)
  {
    while (arr[start] < pivot)
      start++;
    while (arr[end] > pivot)
      end--;
    if (start < end)
      swap(&arr[start], &arr[end]);
  }
  swap(&pivot, &arr[end]);
  return end;
}

void quickSort(int arr[], int lb, int ub)
{
  int val;
  if (lb < ub)
  {
    val = partition(arr, lb, ub);
    quickSort(arr, lb, val - 1);
    quickSort(arr, val + 1, ub);
  }
}

int main()
{
  int arr[] = {9, 6, 3, 5, 8, 7}, n = sizeof(arr) / sizeof(arr[0]), i;
  quickSort(arr, 0, n - 1);
  printf("Sorted: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}