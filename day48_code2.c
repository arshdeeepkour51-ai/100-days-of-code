//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>

static void reverseRange(char *str, int left, int right) {
    while (left < right) {
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}

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

    int i = 0;
    while (i < len) {
        while (i < len && str[i] == ' ') {
            i++;
        }
        int start = i;
        while (i < len && str[i] != ' ') {
            i++;
        }
        if (start < i) {
            reverseRange(str, start, i - 1);
        }
    }

    printf("%s\n", str);
    return 0;
}