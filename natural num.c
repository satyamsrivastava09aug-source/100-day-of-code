#include <stdio.h>
int main(){
int num,sum;
printf("Enter the number: \n");
scanf("%d", &num);
sum = num * (num + 1) / 2;
printf("The sum of first %d natural numbers is: %d\n", num, sum);   
return 0;
}