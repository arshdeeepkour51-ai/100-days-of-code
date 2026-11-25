//Q100: Print all sub-strings of a string.
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    char str[1000];
    if (!fgets(str, sizeof(str), stdin)) {
        return 1;
    }

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }

    bool first = true;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) {
                putchar(',');
            }
            first = false;
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
        }
    }
    putchar('\n');
    return 0;
}