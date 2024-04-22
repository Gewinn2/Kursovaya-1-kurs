#pragma once

class Equation {
public:
    double a;
    double b;
    double c;
    Equation(double _a, double _b, double _c) : a(_a), b(_b), c(_c) {}
    virtual void solveEq() const = 0;
};