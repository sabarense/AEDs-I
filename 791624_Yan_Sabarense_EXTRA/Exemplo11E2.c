#include <stdio.h>

void calcularDiferencas(int arr1[], int arr2[], int diff[], int size)
{
    for (int i = 0; i < size; i++) {
        diff[i] = arr1[i] - arr2[i];
    }
}

int main()
{
    int arr1[] = {5, 7, 9, 3};
    int arr2[] = {2, 4, 6, 3};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int diff[size];

    calcularDiferencas(arr1, arr2, diff, size);

    printf("Diferenças: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", diff[i]);
    }
    printf("\n");

    return 0;
}
