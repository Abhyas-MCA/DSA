#define NUM 10
#include <stdio.h>

void sort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (arr[j] > arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
}

int main()
{
    int arr[NUM];
    int i;

    printf("Enter %d numbers: ", NUM);
    for (i = 0; i < NUM; i++)
        scanf("%d", &arr[i]);

    sort(arr, NUM);

    printf("2nd Largest element is: %d", arr[1]);
}