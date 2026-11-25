//Q120: Write a program to take a string input. Change it to sentence case.
#include <ctype.h>
#include <stdio.h>

int main(void) {
    char str[1000];
    if (!fgets(str, sizeof(str), stdin)) {
        return 1;
    }

    int newWord = 1;
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        unsigned char ch = (unsigned char)str[i];
        if (ch == ' ') {
            newWord = 1;
        } else {
            if (isalpha(ch)) {
                str[i] = (char)(newWord ? toupper(ch) : tolower(ch));
            }
            newWord = 0;
        }
        i++;
    }
    str[i] = '\0';

    printf("%s\n", str);
    return 0;
}