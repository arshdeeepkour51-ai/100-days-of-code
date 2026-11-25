//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    FILE *fp = fopen("students.txt", "w");
    if (!fp) {
        printf("Error: Could not open students.txt for writing.\n");
        return 1;
    }

    struct Student s;
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll, and marks for student %d: ", i + 1);
        if (scanf("%99s %d %d", s.name, &s.roll, &s.marks) != 3) {
            fclose(fp);
            return 1;
        }
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (!fp) {
        printf("Error: Could not open students.txt for reading.\n");
        return 1;
    }

    while (fscanf(fp, "%99s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}