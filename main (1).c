#include <stdio.h>

int countElementsWithinSegment(int arr[], int size, int x, int b) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= x && arr[i] <= b) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 5, 3, 7, 2, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int b = 5;

    int count = countElementsWithinSegment(arr, size, x, b);
    printf("Number of array elements within the segment [%d, %d]: %d\n", x, b, count);

    return 0;
}