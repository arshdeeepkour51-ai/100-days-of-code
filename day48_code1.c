//Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[1000], s2[1000];
    if (scanf("%999s %999s", s1, s2) != 2) {
        return 1;
    }

    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }

    char doubled[2000];
    strcpy(doubled, s1);
    strcat(doubled, s1);

    printf("%s\n", strstr(doubled, s2) != NULL ? "Rotation" : "Not rotation");
    return 0;
}