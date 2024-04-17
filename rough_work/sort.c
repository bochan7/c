#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {19, 67, 32, 90, 46, 7, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // Bubble Sort
    bubbleSort(arr, n);
    printf("Array sorted with Bubble Sort: ");
    printArray(arr, n);

    // Reset array for other sorts
    int arr2[] = {19, 67, 32, 90, 46, 7, 18};
    printf("\nOriginal array: ");
    printArray(arr2, n);

    // Selection Sort
    selectionSort(arr2, n);
    printf("Array sorted with Selection Sort: ");
    printArray(arr2, n);

    // Reset array for other sorts
    int arr3[] = {19, 67, 32, 90, 46, 7, 18};
    printf("\nOriginal array: ");
    printArray(arr3, n);

    // Insertion Sort
    insertionSort(arr3, n);
    printf("Array sorted with Insertion Sort: ");
    printArray(arr3, n);

    return 0;
}
