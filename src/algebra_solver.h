#ifndef ALGEBRA_SOLVER_H
#define ALGEBRA_SOLVER_H

#include <vector>

void solveLinearEquation(double a, double b);
void solveQuadraticEquation(double a, double b, double c);
double evaluatePolynomial(const std::vector<double> &coefficients, double x);

#endif
