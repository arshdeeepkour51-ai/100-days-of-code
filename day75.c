//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main(void) {
    char filename[256], text[1000];
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) {
        return 1;
    }
    getchar(); // consume trailing newline after filename

    printf("Enter text to append: ");
    if (!fgets(text, sizeof(text), stdin)) {
        return 1;
    }

    FILE *fp = fopen(filename, "a+");
    if (!fp) {
        printf("Error: Could not open %s.\n", filename);
        return 1;
    }

    if (fseek(fp, 0, SEEK_END) == 0 && ftell(fp) > 0) {
        fseek(fp, -1, SEEK_END);
        if (fgetc(fp) != '\n') {
            fseek(fp, 0, SEEK_END);
            fputc('\n', fp);
        }
    }

    fputs(text, fp);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}