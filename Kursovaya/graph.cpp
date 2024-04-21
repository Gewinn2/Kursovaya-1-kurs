#include <cmath>
#include <SFML/Graphics.hpp>
#include "header.h"

using namespace sf;

void drawGraph(double a, double b, double c) {
	RenderWindow window(VideoMode(600, 600), "Function graph");
	while (window.isOpen()){
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}

		window.clear(Color::White);
		window.display();
	}
}