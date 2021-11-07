// WAP to print the diagonal elements of a matrix

#include <stdio.h>

int main()
{
    int arr[3][3], i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter row %d: ", i + 1);
        scanf("%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    printf("Diagonal Elements are: ");
    for (i = 0; i < 3; i++)
        printf("%d ", arr[i][i]);

    return 0;
}