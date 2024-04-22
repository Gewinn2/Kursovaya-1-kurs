#include <cmath>
#include <SFML/Graphics.hpp>
#include "function.h"

void drawGraph(double a, double b, double c) {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Graph");
    sf::VertexArray graph(sf::LinesStrip, 800);

    // Создание точек графа y = ax^2 + bx + c
    for (int i = 0; i < 800; ++i) {
        float x = (i - 400.0f) / 20.0f;
        float y = a * x * x + b * x  + c;
        graph[i].position = sf::Vector2f(i, 300 - y * 20.0f);
        graph[i].color = sf::Color::Red;
    }

    // Создание осей X и Y
    sf::VertexArray xAxis(sf::Lines, 2);
    xAxis[0].position = sf::Vector2f(0, 300);
    xAxis[1].position = sf::Vector2f(800, 300);
    xAxis[0].color = sf::Color::Black;
    xAxis[1].color = sf::Color::Black;

    sf::VertexArray yAxis(sf::Lines, 2);
    yAxis[0].position = sf::Vector2f(400, 0);
    yAxis[1].position = sf::Vector2f(400, 600);
    yAxis[0].color = sf::Color::Black;
    yAxis[1].color = sf::Color::Black;

    // Создание отметок на осях с расстоянием от начала координат
    std::vector<sf::VertexArray> marks;
    for (int i = -19; i <= 19; ++i) {
        if (i != 0) {
            // Отметки на оси X
            sf::VertexArray markX(sf::Lines, 2);
            markX[0].position = sf::Vector2f(400 + i * 20, 295);
            markX[1].position = sf::Vector2f(400 + i * 20, 305);
            markX[0].color = sf::Color::Black;
            markX[1].color = sf::Color::Black;
            marks.push_back(markX);

            // Отметки на оси Y
            sf::VertexArray markY(sf::Lines, 2);
            markY[0].position = sf::Vector2f(395, 300 + i * 20);
            markY[1].position = sf::Vector2f(405, 300 + i * 20);
            markY[0].color = sf::Color::Black;
            markY[1].color = sf::Color::Black;
            marks.push_back(markY);
        }
    }

    // Добавление стрелок на концах осей
    sf::VertexArray arrowX(sf::Lines, 2);
    arrowX[0].position = sf::Vector2f(795, 295);
    arrowX[1].position = sf::Vector2f(800, 300);
    arrowX[0].color = sf::Color::Black;
    arrowX[1].color = sf::Color::Black;

    sf::VertexArray arrowX2(sf::Lines, 2);
    arrowX2[0].position = sf::Vector2f(795, 305); // Изменили позицию стрелки X
    arrowX2[1].position = sf::Vector2f(800, 300);
    arrowX2[0].color = sf::Color::Black;
    arrowX2[1].color = sf::Color::Black;

    sf::VertexArray arrowY(sf::Lines, 2);
    arrowY[0].position = sf::Vector2f(395, 5);
    arrowY[1].position = sf::Vector2f(400, 0);
    arrowY[0].color = sf::Color::Black;
    arrowY[1].color = sf::Color::Black;

    sf::VertexArray arrowY2(sf::Lines, 2);
    arrowY2[0].position = sf::Vector2f(405, 5); // Изменили позицию стрелки Y
    arrowY2[1].position = sf::Vector2f(400, 0);
    arrowY2[0].color = sf::Color::Black;
    arrowY2[1].color = sf::Color::Black;


    // Загрузка шрифта для текста
    sf::Font font;
    font.loadFromFile("C:/Users/danii/source/repos/ofont.ru_Time Roman.ttf");

    // Создание текстовых меток для числовых обозначений
    std::vector<sf::Text> labels;
    for (int i = -19; i <= 19; ++i) {
        if (i != 0) { // Пропускаем ноль, так как он уже обозначен осью
            sf::Text label(std::to_string(i), font, 15);
            if (i < 0) {
                label.setPosition(397 + i * 20.0f - 5, 275); // Позиция над осью X для отрицательных значений
            }
            else {
                label.setPosition(400 + i * 20.0f - 5, 310); // Позиция под осью X для положительных значений
            }
            label.setFillColor(sf::Color::Black);
            labels.push_back(label);
        }
    }

    std::vector<sf::Text> labels2;
    for (int i = -14; i <= 14; ++i) {
        if (i != 0) { // Пропускаем ноль, так как он уже обозначен осью
            sf::Text label2(std::to_string(-i), font, 15);
            if (i < 0) {
                label2.setPosition(410, 295 + i * 20.0f - 5);
            }
            else {
                label2.setPosition(370, 295 + i * 20.0f - 5);
            }
            label2.setFillColor(sf::Color::Black);
            labels2.push_back(label2);
        }
    }

    // Создание x и y у концов координатных осей
    std::vector<sf::Text> xSign;
    sf::Text xSign2("X", font, 15);
    xSign2.setPosition(790, 310);
    xSign2.setFillColor(sf::Color::Black);
    xSign.push_back(xSign2);

    std::vector<sf::Text> ySign;
    sf::Text ySign2("Y", font, 15);
    ySign2.setPosition(410, -5);
    ySign2.setFillColor(sf::Color::Black);
    ySign.push_back(ySign2);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        window.draw(graph);
        window.draw(xAxis);
        window.draw(yAxis);

        // Отрисовка отметок на осях
        for (const auto& mark : marks) {
            window.draw(mark);
        }

        for (const auto& label : labels) {
            window.draw(label);
        }

        for (const auto& label2 : labels2) {
            window.draw(label2);
        }

        for (const auto& ySign2 : ySign) {
            window.draw(ySign2);
        }

        for (const auto& xSign2 : xSign) {
            window.draw(xSign2);
        }

        window.draw(arrowX);
        window.draw(arrowX2);
        window.draw(arrowY);
        window.draw(arrowY2);

        window.display();
    }
	return;
}