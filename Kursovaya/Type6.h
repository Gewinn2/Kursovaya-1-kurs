#pragma once
#include <iostream>
#include <iomanip>
#include "equation.h"

// Уравнение ax^2 = 0
class Type6 : public Equation {
public:
	Type6(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
	void solveEq() const override {
		std::cout << "x = 0" << std::endl << std::endl;
	}
};