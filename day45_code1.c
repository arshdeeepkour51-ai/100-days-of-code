//Q89: Count frequency of a given character in a string.
#include <stdio.h>

int main(void) {
    char str[1000], target;
    if (scanf("%999s %c", str, &target) != 2) {
        return 1;
    }

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}