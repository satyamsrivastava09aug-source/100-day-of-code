#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter length of first side: ");
    scanf("%f", &a);
    printf("Enter length of second side: ");
    scanf("%f", &b);
    printf("Enter length of third side: ");
    scanf("%f", &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("This is an Equilateral triangle.\n");
        } 
        else if (a == b || b == c || c == a) {
            printf("This is an Isosceles triangle.\n");
        } 
        else {
            printf("This is a Scalene triangle.\n");
        }
    } 
    else {
        printf("The given side lengths do not form a valid triangle.\n");
    }

    return 0;
}
