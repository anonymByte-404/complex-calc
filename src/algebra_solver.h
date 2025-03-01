#ifndef ALGEBRA_SOLVER_H_
#define ALGEBRA_SOLVER_H_

#include <vector>
#include <cmath>
#include <iomanip>

void solveLinearEquation(double a, double b);

void solveQuadraticEquation(double a, double b, double c);

double evaluatePolynomial(const std::vector<double>& coefficients, double x);

#endif
