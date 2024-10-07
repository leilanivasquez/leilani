#include <stdio.h>

int findTarget(int arr[], int length, int target);

int main() {
    int arr[] = {5, 12, 8, 3, 19, 8, 15};
    int length = 7;
    int target = 8;

    int index = findTarget(arr, length, target);

    if (index != -1) {
        printf("target %d at index %d\n", target, index);
    } else {
        printf("target %d found in the array\n", target);
    }

    return 0;
}

//definition
int findTarget(int arr[], int length, int target) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}
