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

    drawGraph(a, b, c);

    cout << a << " " << b << " " << c << endl;

    cout << "��� �������� � ���� ������� ����� ������� ";
    _getch();
    return;
}