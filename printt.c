#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("Numbers from 1 to %d:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n"); 
    }

    return 0;
}
