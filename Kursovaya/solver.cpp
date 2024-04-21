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

    while (true) {
        int choice;
        cout << "Показать график функции?" << endl;
        cout << "1. Да" << endl;
        cout << "2. Нет" << endl;
        cout << "Введите цифру:";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Некорректное значение. Введите целое число." << endl;
            continue;
        }

        switch (choice) {
        case 1:
            cout << "Для того, чтобы выйти нажмите крестик на окне графика функции" << endl;
            drawGraph(a, b, c);
            break;
        case 2:
            break;
        default:
            cout << "Такого пункта меню нет. Введите корректный номер." << endl;
            continue;
        }
        break;
    }

    cout << "Для возврата к меню нажмите любую клавишу ";
    _getch();
    return;
}