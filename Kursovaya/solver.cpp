#include <iostream>
#include <conio.h>
#include "function.h"
#include "Type1.h"
#include "Type2.h"
#include "Type3.h"
#include "Type4.h"

using namespace std;

void showGraph(double a, double b, double c) {
    while (true) {
        int choice;
        cout << "Показать график функции?" << endl;
        cout << "1. Да" << endl;
        cout << "2. Нет" << endl;
        cout << "Введите цифру: ";
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
}

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
    cout << endl;

        if (a == 0 && b == 0 && c == 0) {
            Type1 type1(a, b, c);
            cout << "0=0";
            type1.solveEq();
        }
        else if (a == 0 && b == 0 && c != 0) {
            Type2 type2(a, b, c);
            type2.solveEq();
        }
        else if (a != 0 && b != 0 && c != 0) {
            Type3 type3(a, b, c);
            type3.solveEq();
            showGraph(a, b, c);
        }
        else if (a != 0 && b != 0 && c == 0) {
            Type4 type4(a, b, c);
            type4.solveEq();
        }
        else if (a != 0 && b == 0 && c != 0) {
            
        }
        else if (a != 0 && b == 0 && c == 0) {
            
        }
        else if (a == 0 && b != 0 && c != 0) {
            
        }
        else if (a == 0 && b != 0 && c == 0) {
            
        }

    cout << "Для возврата к меню нажмите любую клавишу ";
    _getch();
    return;
}