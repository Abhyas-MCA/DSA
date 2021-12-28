#include <stdio.h>

int main()
{
  int arr[10], i, j,  key;

  printf("Enter 10 numbers: ");
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
  for (i = 1; i < 10; i++)
  {
    key = arr[i];
    j = i;
    while (j > 0 && arr[j - 1] > key)
    {
      arr[j] = arr[j - 1];
      j--;
    }
    arr[j] = key;
  }
  printf("Sorted Array: ");
  for (i = 0; i < 10; i++)
    printf("%d ", arr[i]);

  return 0;
}