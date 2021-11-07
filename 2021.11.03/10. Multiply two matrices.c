// WAP to Multiply two matrices

#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];
    int i, j, k, sum = 0;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            arr3[i][j] = 0;

    printf("1st Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter row %d: ", i + 1);
        scanf("%d%d%d", &arr1[i][0], &arr1[i][1], &arr1[i][2]);
    }

    printf("2nd Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter row %d: ", i + 1);
        scanf("%d%d%d", &arr2[i][0], &arr2[i][1], &arr2[i][2]);
    }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 3; k++)
                arr3[i][j] += arr1[i][k] + arr2[j][k];

    printf("Product: \n");
    for (i = 0; i < 3; i++)
        printf("%d\t%d\t%d\n", arr3[i][0], arr3[i][1], arr3[i][2]);

    return 0;
}