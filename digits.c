#include <stdio.h>
int main(){
    int num, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int originalnum=num;
    if (num < 0)
    {
        num = -num;
    }
    while (num > 0)
    {
        remainder = num % 10;
        sum+= remainder;
        num /= 10;
    }
    printf("Sum of digits of %d is %d\n", originalnum, sum);
    return 0;   

}
