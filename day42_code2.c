//Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main(void) {
    char str[1000];
    if (!fgets(str, sizeof(str), stdin)) {
        return 1;
    }

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (char)(str[i] - ('a' - 'A'));
        }
        i++;
    }
    str[i] = '\0';

    printf("%s\n", str);
    return 0;
}