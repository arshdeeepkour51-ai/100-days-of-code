//Q85: Reverse a string.
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
    str[len] = '\0';

    for (int l = 0, r = len - 1; l < r; l++, r--) {
        char tmp = str[l];
        str[l] = str[r];
        str[r] = tmp;
    }

    printf("%s\n", str);
    return 0;
}