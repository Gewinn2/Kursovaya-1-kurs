#include <iostream>
#include <conio.h>
#include "function.h"
#include "Type1.h"
#include "Type2.h"
#include "Type3.h"
#include "Type4.h"
#include "Type5.h"
#include "Type6.h"
#include "Type7.h"
#include "Type8.h"

using namespace std;

// ���������� ���� ��� ������ ����������� ������� �������
void showGraph(double a, double b, double c) {
    while (true) {
        int choice;
        cout << "�������� ������ �������?" << endl;
        cout << "1. ��" << endl;
        cout << "2. ���" << endl;
        cout << "������� �����: ";
        cin >> choice;
        // ��������� ����� ������������
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
}

// ������� ��� ������� ����������� ��������� � ����������� �������
void solver() {
    cout << "--------------------------------------" << endl;
    cout << "     ������� ����������� ���������    " << endl;
    cout << "--------------------------------------" << endl << endl;

    double a, b, c;

    // ���� ������������� ���������
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
    cout << endl;

    // ����� ������� ������������� ���� ��������� � ����������� �� �������������
        if (a == 0 && b == 0 && c == 0) {
            Type1 type1(a, b, c);
            cout << "0 = 0" << endl;
            type1.solveEq();
        }
        else if (a == 0 && b == 0 && c != 0) {
            cout << c << " = 0" << endl;
            Type2 type2(a, b, c);
            type2.solveEq();
        }
        else if (a != 0 && b != 0 && c != 0) {
            if (a == 1) {
                cout << "x^2 + ";
            }
            else {
                cout << a << "x^2 + ";
            }
            if (b == 1) {
                cout << "x + " << c << " = 0" << endl;
            }
            else {
                cout << b << "x + " << c << " = 0" << endl;
            }
            Type3 type3(a, b, c);
            type3.solveEq();
            showGraph(a, b, c);
        }
        else if (a != 0 && b != 0 && c == 0) {
            if (a == 1) {
                cout << "x^2 + ";
            }
            else {
                cout << a << "x^2 + ";
            }
            if (b == 1) {
                cout << "x = 0" << endl;
            }
            else {
                cout << b << "x = 0" << endl;
            }
            Type4 type4(a, b, c);
            type4.solveEq();
            showGraph(a, b, c);
        }
        else if (a != 0 && b == 0 && c != 0) {
            if (a == 1) {
                cout << "x^2 + " << c << " = 0" << endl;
            }
            else {
                cout << a << "x^2 + " << c << " = 0" << endl;
            }
            Type5 type5(a, b, c);
            type5.solveEq();
            showGraph(a, b, c);
        }
        else if (a != 0 && b == 0 && c == 0) {
            if (a == 1) {
                cout << "x^2 = 0" << endl;
            }
            else {
                cout << a << "x^2 = 0" << endl;
            }
            Type6 type6(a, b, c);
            type6.solveEq();
            showGraph(a, b, c);
        }
        else if (a == 0 && b != 0 && c != 0) {
            if (b == 1) {
                cout << "x + " << c << " = 0" << endl;
            }
            else {
                cout << b << "x + " << c << " = 0" << endl;
            }
            Type7 type7(a, b, c);
            type7.solveEq();
            showGraph(a, b, c);
        }
        else if (a == 0 && b != 0 && c == 0) {
            if (b == 1) {
                cout << "x = 0" << endl;
            }
            else {
                cout << b << "x = 0" << endl;
            }
            Type8 type8(a, b, c);
            type8.solveEq();
            showGraph(a, b, c);
        }

    cout << "��� �������� � ���� ������� ����� ������� ";
    _getch();
    return;
}