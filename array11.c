#include <stdio.h>
#define MAX_SIZE 100
int insertSorted(int arr[], int size, int capacity, int element) {
    if (size >= capacity) {
        printf("\nError: Array capacity reached. Cannot insert element.\n");
        return size;
    }
    int i = size - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;
    return size + 1;
}
int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; 
    int size = 5; 
    int element;
    printf("Original sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }printf("\n\nEnter the element to insert: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    size = insertSorted(arr, size, MAX_SIZE, element);
    printf("\nArray after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
     return 0;
}
