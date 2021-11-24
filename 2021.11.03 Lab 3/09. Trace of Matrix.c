// WAP to find the trace of a matrix

#include <stdio.h>

int main()
{
    int arr[3][3], i, sum = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter row %d: ", i + 1);
        scanf("%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    for (i = 0; i < 3; i++)
        sum += arr[i][i];
    printf("Trace of matrix is: %d", sum);

    return 0;
}