#include <stdio.h>

int main() {
    int days;
    int fine = 0;
    printf("Enter the number of days the book is returned late: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
        return 1;
    }
    if (days <= 0) {
        printf("No fine. The book was returned on time!\n");
    } 
    else if (days <= 5) {
        fine = days * 2;
        printf("Total Library Fine: ₹%d\n", fine);
    } 
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Library Fine: ₹%d\n", fine);
    } 
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Library Fine: ₹%d\n", fine);
    } 
    else {
        printf("Fine Status: Membership Cancelled due to returning the book more than 30 days late.\n");
    }

    return 0;
}
