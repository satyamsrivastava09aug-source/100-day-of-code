#include <stdio.h>
int main(){
    int num, i, prime=1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        for(i = 2; i <= num / 2; ++i) {
            if(num % i == 0) {
                prime = 0;
                break;
            }
        }
        if(prime)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

}