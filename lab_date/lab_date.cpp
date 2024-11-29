#include <iostream>
#include "date_utils.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");

    // Примеры дат
    TDate dates[5] = {
        {1, 1, 2000},   // Корректная дата
        {30, 2, 2023},  // Неверный день
        {29, 2, 2020},  // Корректная дата
        {15, 13, 2024}, // Неверный месяц
        {31, 12, 2024}  // Корректная дата
    };

    // Вывод информации для каждой даты
    for (int i = 0; i < 5; i++) {
        PrintDateInfo(dates[i]);
    }

    return 0;
}
