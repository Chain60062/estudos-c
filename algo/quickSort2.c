#include <stdio.h>
#include <stdlib.h>
#define N 10

void quickSort(int a[], int low, int high);
int partition(int a[], int low, int high);

int main(void)
{
    int a[N] = {0}, i;

    printf("Enter %d numbers to be sorted: ", N);

    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    // array, index do primeiro elemento, index do ultimo elemento(no caso 0 e 9)
    quickSort(a, 0, N - 1);
    printf("In sorted order: ");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

void quickSort(int a[], int low, int high)
{
    int middle;
    if (low >= high)
        return;
    middle = partition(a, low, high);
    quickSort(a, low, middle - 1);
    quickSort(a, middle + 1, high);
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    while (1)
    {
        while (low < high && pivot <= a[high])
            high--;
        if (low >= high)
            break;
        a[low++] = a[high];
        while (low < high && a[low] <= pivot)
            low++;
        if (low >= high)
            break;
        a[high--] = a[low];
    }
    a[high] = pivot;
    return high;
}