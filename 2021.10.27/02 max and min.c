// WAP to find the max and min elements of given array.

#define NUM 5

#include <stdio.h>

int main() {
    int i, arr[NUM], max, min;

    printf("Enter %d values: ", NUM);
    for (i = 0; i < NUM; i++)
        scanf("%d", &arr[i]);

    max = arr[0];
    min = arr[0];
    for (i = 0; i < NUM; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Given array: ");
    for (i = 0; i < NUM; i++)
        printf("%d ", arr[i]);

    printf("\nMax: %d, Min: %d ", max, min);

    return 0;
}