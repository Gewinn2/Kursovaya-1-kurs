#pragma once
#include <iostream>
#include "equation.h"

// ��������� c = 0
class Type2 : public Equation {
public:
	Type2(double _a, double _b, double _c) : Equation(_a, _b, _c) {}
	void solveEq() const override {
		std::cout << "��������� �� ����� ������." << std::endl << std::endl;
	}
};