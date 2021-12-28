// 4:41
#include <stdio.h>

void merge(int a[], int lb, int mid, int ub, int n)
{
  int i = lb, j = mid + 1, k = lb;
  int b[n];
  while (i <= mid && j <= ub)
    if (a[i] < a[j])
      b[k++] = a[i++];
    else
      b[k++] = a[j++];

  while (i <= mid)
    b[k++] = a[i++];

  while (j <= ub)
    b[k++] = a[j++];

  for (i = lb; i <= ub; i++)
    a[i] = b[i];
}

void mergeSort(int arr[], int lb, int ub, int n)
{ 
  int mid;
  if (lb < ub)
  {
    mid = (lb + ub) / 2;
    mergeSort(arr, lb, mid, n);
    mergeSort(arr, mid + 1, ub, n);
    merge(arr, lb, mid, ub, n);
  }
}

int main()
{
  int arr[] = {9, 6, 3, 5, 8, 7}, n = sizeof(arr) / sizeof(arr[0]), i;
  mergeSort(arr, 0, n - 1, n);
  printf("Sorted Array: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}