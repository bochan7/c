#include <stdio.h>

int main() {
    int n, arr1[100], arr2[100];

    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the elements:\n");
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Elements in arr1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nElements in arr2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}