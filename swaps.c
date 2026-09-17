#include <stdio.h>
#include <math.h>

int swapFirstAndLast(int num) {
    if (num < 10 && num > -10) {
        return num;
    }

    int originalNum = num;
    int lastDigit = num % 10;
    int firstDigit = num;
    int count = 0;
    while (firstDigit >= 10) {
        firstDigit /= 10;
        count++;
    }
    int placeValue = (int)pow(10, count);
    int middlePart = (originalNum % placeValue) / 10;
    int swappedNum = (lastDigit * placeValue) + (middlePart * 10) + firstDigit;

    return swappedNum;
}

int main() {
    int num = 12345;
    
    printf("Original number: %d\n", num);
    printf("Swapped number:  %d\n", swapFirstAndLast(num));
    
    return 0;
}