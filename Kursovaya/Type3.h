#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
#include "equation.h"

// Уравнение ax^2 + bx + c = 0
class Type3 : public Equation {
public:
	Type3(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
	void solveEq() const override {
		double d = b * b - 4 * a * c;
		if (d < 0) {
			std::cout << "Уравнение не имеет корней." << std::endl;
		}
		else if (d == 0){
			double x = (-b) / (2 * a);
			std::cout << "x = " << std::setprecision(2) << x << std::endl;
		}
		else {
			double x1, x2;
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			std::cout << "x1 = " << std::setprecision(2) << x1 << std::endl;
			std::cout << "x2 = " << std::setprecision(2) << x2 << std::endl;
		}
		std::cout << std::endl;
	}
};