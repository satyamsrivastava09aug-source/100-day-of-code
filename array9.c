#include <stdio.h>
#include <stdlib.h>
int main() {
    long long num;
    int frequencies[10] = {0}; 
    int most_frequent_digit = 0;
    int max_count = 0;

    printf("Enter an integer number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    long long temp = llabs(num);
    if (temp == 0) {
        frequencies[0] = 1;
    }
    while (temp > 0) {
        int digit = temp % 10;   
        frequencies[digit]++;     
        temp /= 10;              
    }
    for (int i = 0; i < 10; i++) {
        if (frequencies[i] > max_count) {
            max_count = frequencies[i];
            most_frequent_digit = i;
        }
    }
    printf("The digit that occurs the most is %d (it appears %d times).\n", 
           most_frequent_digit, max_count);

    return 0;
}
