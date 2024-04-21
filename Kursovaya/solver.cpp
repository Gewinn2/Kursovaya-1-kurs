#include <iostream>
#include <conio.h>
#include "header.h"

using namespace std;

void solver() {
    cout << "--------------------------------------" << endl;
    cout << "     ������� ����������� ���������    " << endl;
    cout << "--------------------------------------" << endl << endl;

    double a, b, c;

    // ���� �
    while (true) {
        cout << "������� a: ";
        cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "������������ �������� a" << endl;
            continue;
        }
        else {
            break;
        }
    }

    // ���� b
    while (true) {
        cout << "������� b: ";
        cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "������������ �������� b" << endl;
            continue;
        }
        else {
            break;
        }
    }

    // ���� c
    while (true) {
        cout << "������� c: ";
        cin >> c;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "������������ �������� c" << endl;
            continue;
        }
        else {
            break;
        }
    }

    while (true) {
        int choice;
        cout << "�������� ������ �������?" << endl;
        cout << "1. ��" << endl;
        cout << "2. ���" << endl;
        cout << "������� �����:";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "������������ ��������. ������� ����� �����." << endl;
            continue;
        }

        switch (choice) {
        case 1:
            cout << "��� ����, ����� ����� ������� ������� �� ���� ������� �������" << endl;
            drawGraph(a, b, c);
            break;
        case 2:
            break;
        default:
            cout << "������ ������ ���� ���. ������� ���������� �����." << endl;
            continue;
        }
        break;
    }

    cout << "��� �������� � ���� ������� ����� ������� ";
    _getch();
    return;
}