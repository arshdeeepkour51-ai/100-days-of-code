//Q86: Check if a string is a palindrome.
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

    bool isPalindrome = true;
    for (int l = 0, r = len - 1; l < r; l++, r--) {
        if (str[l] != str[r]) {
            isPalindrome = false;
            break;
        }
    }

    printf("%s\n", isPalindrome ? "Palindrome" : "Not palindrome");
    return 0;
}