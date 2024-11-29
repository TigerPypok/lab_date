#ifndef DATE_UTILS_H
#define DATE_UTILS_H

#include <iostream>
using namespace std;


struct TDate {
    int Day;
    int Month;
    int Year;
};

// Функция для определения, является ли год високосным
bool LeapYear(TDate D);

// Функция для определения количества дней в месяце
int DaysInMonth(TDate D);

// Функция для проверки корректности даты
int CheckDate(TDate D);

// Функция для вывода информации о дате
void PrintDateInfo(TDate D);

#endif 
