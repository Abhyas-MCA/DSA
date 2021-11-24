// WAP to read and print a 2D Array

#include <stdio.h>
int main()
{
    int arr[3][3], i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Enter values in row number %d: ", i + 1);
        scanf("%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    printf("You entred:\n");
    for (i = 0; i < 3; i++)
        printf("%d\t%d\t%d\n", arr[i][0], arr[i][1], arr[i][2]);

    return 0;
}