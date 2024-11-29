#include "date_utils.h"

// ������� ��� �����������, �������� �� ��� ����������
bool LeapYear(TDate D) {
    if ((D.Year % 4 == 0 && D.Year % 100 != 0) || (D.Year % 400 == 0)) {
        return true;
    }
    return false;
}

// ������� ��� ����������� ���������� ���� � ������
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

// ������� ��� �������� ������������ ����
int CheckDate(TDate D) {
    if (D.Month < 1 || D.Month > 12) {
        return 1; // �������� ����� ������
    }
    if (D.Day < 1 || D.Day > DaysInMonth(D)) {
        return 2; // �������� ����
    }
    return 0; // ���� ���������
}

// ������� ��� ������ ���������� � ����
void PrintDateInfo(TDate D) {
    cout << "����: " << D.Day << "/" << D.Month << "/" << D.Year << endl;

    // ��������� ������������ ����
    cout << "  ��� �������� ����������: " << (LeapYear(D) ? "��" : "���") << endl;

    // ���������� ���������� ���� � ������
    if (CheckDate(D) == 0) {
        cout << "  ���������� ���� � ������: " << DaysInMonth(D) << endl;
    }
    else {
        cout << "  ���������� ���������� ���������� ����: ���� �����������." << endl;
    }

    // ��������� ������������ ����
    int result = CheckDate(D);
    if (result == 0) {
        cout << "  ���� ���������." << endl;
    }
    else if (result == 1) {
        cout << "  ������: �������� ����� ������." << endl;
    }
    else {
        cout << "  ������: �������� ����." << endl;
    }

    cout << endl; // ����������� ����� �������� ��� ������ ���
}
