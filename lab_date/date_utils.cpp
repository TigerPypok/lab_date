#include "date_utils.h"

// Функция для определения, является ли год високосным
bool LeapYear(TDate D) {
    if ((D.Year % 4 == 0 && D.Year % 100 != 0) || (D.Year % 400 == 0)) {
        return true;
    }
    return false;
}

// Функция для определения количества дней в месяце
int DaysInMonth(TDate D) {
    switch (D.Month) {
    case 4: case 6: case 9: case 11:
        return 30;
    case 2: {
        if (LeapYear(D)) {
            return 29;
        }
        else {
            return 28;
        }
    }
    default:
        return 31;
    }
}

// Функция для проверки корректности даты
int CheckDate(TDate D) {
    if (D.Month < 1 || D.Month > 12) {
        return 1; // Неверный номер месяца
    }
    if (D.Day < 1 || D.Day > DaysInMonth(D)) {
        return 2; // Неверный день
    }
    return 0; // Дата корректна
}

// Функция для вывода информации о дате
void PrintDateInfo(TDate D) {
    cout << "Дата: " << D.Day << "/" << D.Month << "/" << D.Year << endl;

    // Проверяем високосность года
    cout << "  Год является високосным: " << (LeapYear(D) ? "Да" : "Нет") << endl;

    // Определяем количество дней в месяце
    if (CheckDate(D) == 0) {
        cout << "  Количество дней в месяце: " << DaysInMonth(D) << endl;
    }
    else {
        cout << "  Невозможно определить количество дней: дата некорректна." << endl;
    }

    // Проверяем корректность даты
    int result = CheckDate(D);
    if (result == 0) {
        cout << "  Дата корректна." << endl;
    }
    else if (result == 1) {
        cout << "  Ошибка: неверный номер месяца." << endl;
    }
    else {
        cout << "  Ошибка: неверный день." << endl;
    }

    cout << endl; // Разделитель между выводами для разных дат
}
