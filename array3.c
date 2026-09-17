#include <stdio.h>

int main() {
    int arr[100];
    int size, i;
    int max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1; 
    }
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
