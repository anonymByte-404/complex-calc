#ifndef SEXTIC_H
#define SEXTIC_H

#include <cmath>
#include <iostream>

double evaluateSextic(double a, double b, double c, double d, double e, double f, double g, double x);
double evaluateDerivative(double a, double b, double c, double d, double e, double f, double x);
double newtonRaphsonSextic(double a, double b, double c, double d, double e, double f, double g, double initialGuess, double tolerance = 1e-6, int maxIterations = 1000);

#endif