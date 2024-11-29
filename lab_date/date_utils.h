#ifndef DATE_UTILS_H
#define DATE_UTILS_H

#include <iostream>
using namespace std;


struct TDate {
    int Day;
    int Month;
    int Year;
};

// ������� ��� �����������, �������� �� ��� ����������
bool LeapYear(TDate D);

// ������� ��� ����������� ���������� ���� � ������
int DaysInMonth(TDate D);

// ������� ��� �������� ������������ ����
int CheckDate(TDate D);

// ������� ��� ������ ���������� � ����
void PrintDateInfo(TDate D);

#endif 
