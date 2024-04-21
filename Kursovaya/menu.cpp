#include <iostream>
#include "header.h"
#include <cctype>
using namespace std;

void clearConsole() {
    system("cls");
}

void menu() {

    int choice;
    while (true) {
        cout << "МЕНЮ" << endl << endl;
        cout << "1. Решение квадратного уравнения" << endl;
        cout << "2. Типы квадратных уравнений" << endl;
        cout << "3. Завершение работы" << endl;
        cout << "Введите номер пункта: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            clearConsole();
            cout << "Некорректное значение. Введите целое число." << endl;
            continue;
        }

        switch (choice) {
        case 1:
            clearConsole();
            solver();
            clearConsole();
            break;
        case 2:
            clearConsole();
            printType();
            clearConsole();
            break;
        case 3:
            clearConsole();
            cout << "Завершение работы..." << endl;
            return;
        default:
            clearConsole();
            cout << "Такого пункта меню нет. Введите корректный номер." << endl;
            break;
        }
    }
}