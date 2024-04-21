#include <cmath>
#include <SFML/Graphics.hpp>
#include "header.h"

using namespace sf;

void drawGraph(double a, double b, double c) {
	int W = 600;
	int H = 600;
	int x0 = W / 2;
	int y0 = H / 2;

	RenderWindow window(VideoMode(W, H), "Function graph!");

	CircleShape point(2.f);
	point.setFillColor(Color::Red);

	int l = -10;
	int r = 10;
	float t = 100;
	int m = ((l) * (-1) + r) * t + 1;
	int s = 30;

	RectangleShape line[40];
	for (int i = 0; i < 40; i++) {
		line[i].setSize(Vector2f(1, 20));
		line[i].setFillColor(Color::Black);

		if (i < 20) {
			if (i < 10)
				line[i].setPosition(x0 - (i + 1) * s, y0 - 10);
			else
				line[i].setPosition(x0 + (i - 9) * s, y0 - 10);
		}
		else {
			line[i].setRotation(90);
			if (i < 30)
				line[i].setPosition(x0 + 10, y0 + (i - 30) * s);
			else
				line[i].setPosition(x0 + 10, y0 + (i - 29) * s);
		}
	}

	Font font;
	font.loadFromFile("C:/Windows/Fonts/Arial.ttf");

	Text text;
	text.setFont(font);
	text.setCharacterSize(12);
	text.setFillColor(Color::Black);

	RectangleShape OsX(Vector2f(W, 1));
	OsX.setFillColor(Color::Black);
	OsX.setPosition(0, y0);

	RectangleShape OsY(Vector2f(1, H));
	OsY.setFillColor(Color::Black);
	OsY.setPosition(x0, 0);

	RectangleShape strel[4];
	for (int i = 0; i < 4; i++) {
		strel[i].setSize(Vector2f(1, 25));
		strel[i].setFillColor(Color::Black);

		if (i < 2)
			strel[i].setPosition(x0, 0);
		else
			strel[i].setPosition(W, y0);
	}
	strel[0].setRotation(25);
	strel[1].setRotation(-25);
	strel[2].setRotation(60);
	strel[3].setRotation(-250);

	int animation = 0;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		if (animation < m)
			animation += 5;

		window.clear(Color::White);
		window.draw(OsX);
		window.draw(OsY);
		for (int i = 0; i < 4; i++)
			window.draw(strel[i]);

		for (int i = 0; i < 40; i++)
			if (i != 19 && i != 20)
				window.draw(line[i]);

		for (int i = 0; i < animation; i++) {
			float x = l + i / t;
			float y = a * x * x + b * x + c;

			float x1 = x0 + x * s;
			float y1 = y0 - y * s;

			text.setString(std::to_string(int(x))); // Отображаем целое число
			text.setPosition(x1 + 2, y0 + 2); // Смещение для лучшего отображения
			window.draw(text);

			text.setString(std::to_string(int(y))); // Отображаем целое число
			text.setPosition(x0 + 2, y1 + 2); // Смещение для лучшего отображения
			window.draw(text);

			point.setPosition(x1-1, y1-1);
			window.draw(point);
		}
		window.display();
	}
	return;
}