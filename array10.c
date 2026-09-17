#include <stdio.h>
int binarySearch(int array[], int size, int target) {
    int low = 0;
    int high = size - 1;
while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == target) {
            return mid; 
        }
        if (array[mid] > target) {
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }
    return -1;
}
int main() {
    int myArray[] = {3, 11, 24, 45, 50, 72, 88, 99};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int target = 45;
    int result = binarySearch(myArray, size, target);
    if (result != -1) {
        printf("Element %d found at index position: %d\n", target, result);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }
     return 0;
}
