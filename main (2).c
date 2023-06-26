#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findMinModuloElement(int arr[], int size) {
    int minModulo = abs(arr[0]); 
    int minModuloIndex = 0; 

    for (int i = 1; i < size; i++) {
        int currentModulo = abs(arr[i]);
        if (currentModulo < minModulo) {
            minModulo = currentModulo;
            minModuloIndex = i;
        }
    }

    return arr[minModuloIndex];
}

int findSumBetweenFirstAndLastPositive(int arr[], int size) {
    int firstPositiveIndex = -1;
    int lastPositiveIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            if (firstPositiveIndex == -1) {
                firstPositiveIndex = i;
            }
            lastPositiveIndex = i;
        }
    }

    int sum = 0;

    if (firstPositiveIndex != -1 && lastPositiveIndex != -1 && lastPositiveIndex > firstPositiveIndex) {
        for (int i = firstPositiveIndex + 1; i < lastPositiveIndex; i++) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    srand(time(0)); 
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 201 - 100; 
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int minModuloElement = findMinModuloElement(arr, n);
    printf("Number of the minimum modulo element: %d\n", minModuloElement);

    int sumBetweenFirstAndLastPositive = findSumBetweenFirstAndLastPositive(arr, n);
    printf("Sum of elements between the first and last positive elements: %d\n", sumBetweenFirstAndLastPositive);

    return 0;
}





