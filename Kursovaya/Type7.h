#pragma once
#include <iostream>
#include <iomanip>
#include "equation.h"

class Type7 : public Equation {
public:
	Type7(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
	void solveEq() const override {
		double x;
		x = (-c)/b;
		std::cout << "x = " << std::setprecision(2) << x << std::endl;
		std::cout << std::endl;
	}
};