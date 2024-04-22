#include <iostream>
#include "function.h"
#include <cctype>
using namespace std;

// Очистка консоли
void clearConsole() {
    system("cls");
}

// Отображение меню
void menu() {

    int choice;
    while (true) {
        cout << " --------------------------------" << endl;
        cout << "|              МЕНЮ              |" << endl;
        cout << " --------------------------------" << endl << endl;
        cout << "1. Решение квадратного уравнения" << endl;
        cout << "2. Типы квадратных уравнений" << endl;
        cout << "3. Завершение работы" << endl;
        cout << "Введите номер пункта: ";
        cin >> choice;

        // Обработка ввода пользователя
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            clearConsole();
            cout << "Некорректное значение. Введите целое число." << endl;
            continue;
        }

        // Вызов пункта меню в зависимости от того, что ввел пользователь
        switch (choice) {
        case 1:
            clearConsole();
            solver(); // Функция для решения квадратного уравнения
            clearConsole();
            break;
        case 2:
            clearConsole();
            printType(); // Функция для отображения типов квадратных уравнений
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