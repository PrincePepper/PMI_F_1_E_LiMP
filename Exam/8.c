#include <stdio.h>

#include <stdlib.h>
#include <locale.h>

// функция подсчета дней до нг

unsigned how_many_days(unsigned year, unsigned month, unsigned day) {
    const unsigned month12[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // кол-во дней в каждом месяце
    unsigned days = month12[month - 1] - day;
    if ((year % 4) && (month <= 2)) days--;
    while (month < 12)
        days += month12[month++];
    return days;
}

int main() {
    setlocale(0, "Russian"); // подрубаем русский
    unsigned year, month, day;
    printf("Введите день, месяц, год : ");
    scanf("%d%d%d", &day, &month, &year);
    printf("Осталось до конца года полных дней : %d\n", how_many_days(year, month, day));
    system("pause");
}