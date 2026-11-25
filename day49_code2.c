//Q98: Print initials of a name with the surname displayed in full.
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    char str[1000];
    if (!fgets(str, sizeof(str), stdin)) {
        printf("No input.\n");
        return 1;
    }

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }
    while (len > 0 && isspace((unsigned char)str[len - 1])) {
        len--;
    }
    str[len] = '\0';

    if (len == 0) {
        printf("No name entered.\n");
        return 0;
    }

    int lastWordStart = 0;
    for (int i = 0; i < len; i++) {
        if (!isspace((unsigned char)str[i]) &&
            (i == 0 || isspace((unsigned char)str[i - 1]))) {
            lastWordStart = i;
        }
    }
bool hasInitials = false;
    for (int i = 0; i < lastWordStart; i++) {
        if (!isspace((unsigned char)str[i]) &&
            (i == 0 || isspace((unsigned char)str[i - 1]))) {
            printf("%c.", toupper((unsigned char)str[i]));
            hasInitials = true;
        }
    }
    if (hasInitials) {
        printf(" ");
    }

    putchar(toupper((unsigned char)str[lastWordStart]));
    printf("%s\n", &str[lastWordStart + 1]);
    return 0;
}