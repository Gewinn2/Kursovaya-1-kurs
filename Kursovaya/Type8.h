#pragma once
#include <iostream>
#include <iomanip>
#include "equation.h"

// Уравнение bx = 0
class Type8 : public Equation {
public:
	Type8(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
	void solveEq() const override {
		std::cout << "x = 0" << std::endl << std::endl;
	}
};