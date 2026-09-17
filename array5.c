#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {12, 45, 7, 93, 28, 54, 11};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target;

    printf("Enter the element you want to search for: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int resultIndex = linearSearch(arr, size, target);
    if (resultIndex != -1) {
        printf("Element %d found at index %d.\n", target, resultIndex);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}
