//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    printf("Enter name: ");
    if (!fgets(name, sizeof(name), stdin)) {
        return 1;
    }
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n' || name[i] == '\r') {
            name[i] = '\0';
            break;
        }
    }

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) {
        return 1;
    }

    FILE *fp = fopen("info.txt", "w");
    if (!fp) {
        printf("Error: Could not create info.txt.\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt.\n");
    return 0;
}