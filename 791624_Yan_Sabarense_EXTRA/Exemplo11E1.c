#include <stdio.h>
#include <stdbool.h>

bool saoDiferentes(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 6, 4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    if (saoDiferentes(arr1, arr2, size)) {
        printf("Os arranjos são diferentes em pelo menos uma posição.\n");
    } else {
        printf("Os arranjos são iguais em todas as posições.\n");
    }

    return 0;
}
