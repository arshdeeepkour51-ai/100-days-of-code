//Q97: Print the initials of a name.
#include <ctype.h>
#include <stdio.h>

int main(void) {
    char str[1000];
    if (!fgets(str, sizeof(str), stdin)) {
        return 1;
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            printf("%c.", toupper((unsigned char)str[i]));
        }
    }
    printf("\n");
    return 0;
}