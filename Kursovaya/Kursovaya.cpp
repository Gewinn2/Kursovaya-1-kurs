#include <iostream>
#include "Windows.h"
#include "function.h"
using namespace std;

// Функция для установки цвета текста и фона консоли
void SetConsoleColor(int textColor, int backgroundColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

// Функция для изменения цвета фона всей консоли
void SetConsoleBackgroundColor(int backgroundColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Получить размер консоли
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    DWORD consoleSize = csbi.dwSize.X * csbi.dwSize.Y;

    // Установить атрибуты цвета
    DWORD written;
    FillConsoleOutputAttribute(hConsole, backgroundColor << 4, consoleSize, { 0, 0 }, &written);

    // Заполнить консоль пробелами для применения цвета
    FillConsoleOutputCharacter(hConsole, ' ', consoleSize, { 0, 0 }, &written);

    // Установить курсор в начало
    SetConsoleCursorPosition(hConsole, { 0, 0 });
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;
    bool running = true;
    while (running) {
        // Предложить пользователю выбор темы
        cout << "Выберите тему: " << endl;
        cout << "1. Светлая" << endl;
        cout << "2. Темная" << endl;
        cout << "Введите 1 или 2: ";
        cin >> choice;

        // Вызов пункта меню в зависимости от того, что ввел пользователь
        switch (choice) {
        case 1:
            // Светлая тема: черный текст на белом фоне
            SetConsoleBackgroundColor(15); // Белый фон
            SetConsoleColor(0, 15); // Черный текст на белом фоне
            running = false;
            break;
        case 2:
            // Темная тема: серый текст на черном фоне
            SetConsoleBackgroundColor(0); // Черный фон
            SetConsoleColor(7, 0); // Серый текст на черном фоне
            running = false;
            break;
        default:
            clearConsole();
            cout << "Такого пункта меню нет. Введите корректный номер." << endl;
            break;
        }
    }

    // Запуск меню
    menu();

}
