#include <stdio.h>
int main(){
int simple, compound, principal, rate,time;
printf("Enter the principal amount: \n");
scanf("%d", &principal);
printf("Enter the rate of interest: \n");
scanf("%d", &rate);
printf("Enter the time period: \n");
scanf("%d", &time);
simple = (principal * rate * time) / 100;
compound = principal * (pow(1 + rate / 100, time) - 1);
printf("The simple interest is: %d\n", simple);
printf("The compound interest is: %d\n", compound);
return 0;
}