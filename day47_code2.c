//Q94: Find the longest word in a sentence.
#include <stdio.h>

int main(void) {
    char str[1000];
    if (!fgets(str, sizeof(str), stdin)) {
        return 1;
    }

    int maxLen = 0, bestStart = 0;
    int curLen = 0, curStart = 0;

    for (int i = 0;; i++) {
        char ch = str[i];
        int isEnd = (ch == '\0' || ch == '\n' || ch == '\r');
        if (isEnd || ch == ' ') {
            if (curLen > maxLen) {
                maxLen = curLen;
                bestStart = curStart;
            }
            if (isEnd) {
                break;
            }
            curLen = 0;
            curStart = i + 1;
        } else {
            curLen++;
        }
    }

    for (int i = 0; i < maxLen; i++) {
        putchar(str[bestStart + i]);
    }
    putchar('\n');
    return 0;
}