#include <stdio.h>

int main() {
    int num, temp, digit, product = 1, has_odd = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        temp /= 10;
    }

    if (has_odd) {
        printf("The product of odd digits of %d is %d.\n", num, product);
    } else {
        printf("There are no odd digits in %d.\n", num);
    }

    return 0;
}