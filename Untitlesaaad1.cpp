#include <stdio.h>

int is_leap_year(int year) {
    if (year % 400 == 0) {
        return 1;
    } else if (year % 100 == 0) {
        return 0;
    } else if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (is_leap_year(year)) {
        printf("nam %d là nam nhuan\n", year);
    } else {
        printf("nam %d là nam không nhuan\n", year);
    }


}
