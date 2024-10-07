/*Leilani Vasquez -00292291
Prints an unsorted, and sorted array*/

#include <stdio.h>

int IndexOfMaxInRange(int arr[], int start, int end);
void SwapElements(int arr[], int index1, int index2);
void SortArray(int arr[], int size);

int main() {
    int arr[] = {5, 12, 8, 3, 19, 8, 15};
    int size = 7;

    printf("original: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    SortArray(arr, size);

    printf("sorted: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int IndexOfMaxInRange(int arr[], int start, int end) {
    int maxIndex = start;

    for (int i = start + 1; i < end; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    return maxIndex;
}

void SwapElements(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

void SortArray(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        int maxIndex = IndexOfMaxInRange(arr, 0, i + 1);
        SwapElements(arr, maxIndex, i);
    }
}