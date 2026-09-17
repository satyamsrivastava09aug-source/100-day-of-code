#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an UPPERCASE alphabet.\n", ch);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("It is also a VOWEL.\n");
        } else {
            printf("It is also a CONSONANT.\n");
        }
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a LOWERCASE alphabet.\n", ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("It is also a VOWEL.\n");
        } else {
            printf("It is also a CONSONANT.\n");
        }
    }
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a DIGIT.\n", ch);
    }
    else {
        printf("'%c' is a SPECIAL CHARACTER.\n", ch);
    }

    return 0;
}
