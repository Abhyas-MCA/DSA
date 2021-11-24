// WAP to take an array as user input and display using pointer

#include <stdio.h>

int main()
{
  int arr[10], i;

  printf("Enter 10 values in array: ");
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

  int *p = &arr[0];
  printf("Elements in array are: ");
  for (i = 0; i < 10; i++)
    printf("%d ", *(p + i));

  return 0;
}