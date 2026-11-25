Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

static int isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main(void) {
    int day, month, year;
    printf("Enter date (DD/MM/YYYY): ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid format.\n");
        return 1;
    }

    if (month < 1 || month > 12 || year < 1) {
        printf("Invalid date.\n");
        return 1;
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeap(year)) {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1]) {
        printf("Invalid date.\n");
        return 1;
    }

    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("%02d-%s-%04d\n", day, months[month - 1], year);
    return 0;
}