#include <stdio.h>

int main() {
    int arr[] = {5, 12, 9, 23, 7};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}
