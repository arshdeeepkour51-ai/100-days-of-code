//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <ctype.h>
#include <stdio.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) {
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Error: Could not open %s.\n", filename);
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    int inWord = 0;
    int ch, lastChar = '\0';

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        lastChar = ch;
        if (ch == '\n') {
            lines++;
        }
        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    if (chars > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(fp);
    printf("Characters: %d Words: %d Lines: %d\n", chars, words, lines);
    return 0;
}