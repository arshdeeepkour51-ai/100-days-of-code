//Q91: Remove all vowels from a string.
#include <stdbool.h>
#include <stdio.h>

static bool isVowel(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = (char)(ch + ('a' - 'A'));
    }
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main(void) {
    char str[1000];
    if (!fgets(str, sizeof(str), stdin)) {
        return 1;
    }

    int write = 0;
    for (int read = 0; str[read] != '\0' && str[read] != '\n' && str[read] != '\r'; read++) {
        if (!isVowel(str[read])) {
            str[write++] = str[read];
        }
    }
    str[write] = '\0';

    printf("%s\n", str);
    return 0;
}