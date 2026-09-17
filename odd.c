#include <stdio.h>

int main() {
    int n, i, current_odd, sum = 0;
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("The first %d odd numbers are: ", n);
    for (i = 1; i <= n; i++) {
        current_odd = 2 * i - 1; 
        printf("%d ", current_odd);
        sum += current_odd;
    }
    printf("\nThe sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
