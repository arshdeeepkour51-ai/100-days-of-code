//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int left = 0, maxLen = 0;
    for (int right = 0; s[right] != '\0' && s[right] != '\n' && s[right] != '\r'; right++) {
        unsigned char ch = (unsigned char)s[right];
        if (lastSeen[ch] >= left) {
            left = lastSeen[ch] + 1;
        }
        lastSeen[ch] = right;

        int curLen = right - left + 1;
        if (curLen > maxLen) {
            maxLen = curLen;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}