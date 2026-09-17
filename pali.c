#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    originalNum = num;
    if (num < 0) {
        printf("%d is not a palindrome.\n", originalNum);
        return 0;
    }
    while (num != 0) {
        remainder = num % 10;                  
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;                             
    }
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
