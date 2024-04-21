#include <iostream>
#include <conio.h>
#include "header.h"

using namespace std;

void solver() {
    cout << "--------------------------------------" << endl;
    cout << "     РЕШЕНИЕ КВАДРАТНОГО УРАВНЕНИЯ    " << endl;
    cout << "--------------------------------------" << endl << endl;

    double a, b, c;

    // Ввод а
    while (true) {
        cout << "Введите a: ";
        cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Некорректное значение a" << endl;
            continue;
        }
        else {
            break;
        }
    }

    // Ввод b
    while (true) {
        cout << "Введите b: ";
        cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Некорректное значение b" << endl;
            continue;
        }
        else {
            break;
        }
    }

    // Ввод c
    while (true) {
        cout << "Введите c: ";
        cin >> c;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Некорректное значение c" << endl;
            continue;
        }
        else {
            break;
        }
    }

    drawGraph(a, b, c);

    cout << a << " " << b << " " << c << endl;

    cout << "Для возврата к меню нажмите любую клавишу ";
    _getch();
    return;
}