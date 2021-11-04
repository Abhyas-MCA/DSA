// WAP to find sum the value of the given two array and store into the third array.

#define NUM 5

#include <stdio.h>

int main()
{
    int arr1[NUM], arr2[NUM], arr3[NUM];
    int i;

    printf("Enter %d value in first arrary: ", NUM);
    for (i = 0; i < NUM; i++)
        scanf("%d", &arr1[i]);
    printf("Enter %d value in second array: ", NUM);
    for (i = 0; i < NUM; i++)
        scanf("%d", &arr2[i]);

    for (i = 0; i < NUM; i++)
        arr3[i] = arr1[i] + arr2[i];

    printf("\nFirst array:\t");
    for (i = 0; i < NUM; i++)
        printf("%d ", arr1[i]);

    printf("\nSecond array:\t");
    for (i = 0; i < NUM; i++)
        printf("%d ", arr2[i]);

    printf("\nSum array:\t");
    for (i = 0; i < NUM; i++)
        printf("%d ", arr3[i]);

    return 0;
}