#pragma once
#include <iostream>
#include <iomanip>
#include "equation.h"

class Type4 : public Equation {
public:
	Type4(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
	void solveEq() const override {
		double x1, x2;
		x1 = 0;
		x2 = (-b) / a;
		std::cout << "x1 = " << std::setprecision(2) << x1 << std::endl;
		std::cout << "x2 = " << std::setprecision(2) << x2 << std::endl;
		std::cout << std::endl;
	}
};