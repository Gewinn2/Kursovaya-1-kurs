#pragma once
#include <iostream>
#include "equation.h"

class Type1 : public Equation {
public:
	Type1(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
	void solveEq() const override {
		std::cout << "��������� ����� ��� ����� x." << std::endl << std::endl;
	}
};