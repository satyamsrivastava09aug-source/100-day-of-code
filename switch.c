#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter integers.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error! Modulo by zero is not allowed.\n");
            } else {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
