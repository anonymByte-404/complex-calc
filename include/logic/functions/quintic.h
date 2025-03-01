#ifndef QUINTIC_H
#define QUINTIC_H

#include <cmath>
#include <iostream>

double evaluateQuintic(double a, double b, double c, double d, double e, double f, double x);
double evaluateDerivative(double a, double b, double c, double d, double e, double x);
double newtonRaphsonQuintic(double a, double b, double c, double d, double e, double f, double initialGuess, double tolerance = 1e-6, int maxIterations = 1000);

#endif // QUINTIC_H