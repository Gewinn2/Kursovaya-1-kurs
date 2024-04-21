#pragma once
#include <iostream>
#include "equation.h"

class Type4 : public Equation {
public:
	Type4(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
	void solveEq() const override {
		std::cout << "Уравнение верно при любом x" << std::endl << std::endl;
	}
};