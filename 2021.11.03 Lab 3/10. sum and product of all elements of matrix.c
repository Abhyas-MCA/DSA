// WAP to Read Matrix and print sum and product of all elements

#include <stdio.h>

int main()
{
  int arr[3][3], i, j, sum = 0, product = 1;

  for (i = 0; i < 3; i++)
  {
    printf("Enter row %d: ", i + 1);
    scanf("%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2]);
  }

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      sum += arr[i][j];
      product *= arr[i][j];
    }

  printf("Sum: %d\n", sum);
  printf("Product: %d", product);

  return 0;
}