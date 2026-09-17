#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is an uppercase letter.\n");
    } else {
        printf("The character is a lowercase letter.\n");
        if  ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("The character is a vowel.\n");
        } else {
            printf("The character is a consonant.\n");
        }
         else {
            printf("The character is a special character.\n");
        }
    }
    return 0;
}   
