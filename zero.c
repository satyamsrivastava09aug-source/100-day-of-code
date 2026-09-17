#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0) {
        printf("The number is positive.\n");
    } else if (a < 0) {
        printf("The number is negative.\n");
    } else if (a == 0) {
        printf("The number is zero.\n");
    }
    else {
        printf("Invalid input.\n");
    }
    return 0;
}