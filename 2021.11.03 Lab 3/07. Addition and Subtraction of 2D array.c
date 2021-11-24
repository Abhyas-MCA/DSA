// WAP to perform Addition & Subtraction operation on the elements of a 2D array.

#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], i, j;
    printf("Enter values in first 2D array: \n");

    for (i = 0; i < 3; i++)
    {
        printf("Row %d: ", i + 1);
        for (j = 0; j < 3; j++)

            scanf("%d", &arr1[i][j]);
    }
    printf("Enter values in second 2D array: \n");

    for (i = 0; i < 3; i++)
    {
        printf("Row %d: ", i + 1);
        for (j = 0; j < 3; j++)
            scanf("%d", &arr2[i][j]);
    }

    printf("Sum of 2D array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", arr1[i][j] + arr2[i][j]);
        printf("\n");
    }

    printf("Difference of 2D array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", arr1[i][j] - arr2[i][j]);
        printf("\n");
    }
}