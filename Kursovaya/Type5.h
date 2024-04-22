#pragma once
#include <iostream>
#include <iomanip>
#include "equation.h"

// Уравнение ax^2 + c = 0
class Type5 : public Equation {
public:
	Type5(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
	void solveEq() const override {
		double t = (-c) / a;
		if (t >= 0) {
			double x1, x2;
			x1 = sqrt(t);
			x2 = -sqrt(t);
			std::cout << "x1 = " << std::setprecision(2) << x1 << std::endl;
			std::cout << "x2 = " << std::setprecision(2) << x2 << std::endl;
		}
		else {
			std::cout << "Уравнение не имеет корней." << std::endl;
		}
		std::cout << std::endl;
	}
};