// WAP to separate odd and even elements of array

#define NUM 5

#include <stdio.h>

int main() {
    int arr1[NUM], arr2[NUM], arr3[NUM], i;
    int evenCount = 0, oddCount = 0;

    printf("\nEnter %d values: ", NUM);
    for (i = 0; i < NUM; i++) {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < NUM; i++) {
        if (arr1[i] % 2 == 0)
            arr2[evenCount++] = arr1[i];
        else
            arr3[oddCount++] = arr1[i];
    }

    printf("\nEven: ");
    for (i = 0; i < evenCount; i++)
        printf("%d ", arr2[i]);

    printf("\nOdd: ");
    for (i = 0; i < oddCount; i++)
        printf("%d ", arr3[i]);

    printf("\n");
    return 0;
}